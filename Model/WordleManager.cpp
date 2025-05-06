#include "WordleManager.h"
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <stdexcept>
#include <set>
using namespace Model;

namespace Model {

	WordleManager::WordleManager(WordDictionary* dictionary, bool allowReusedLetters) {
		if (dictionary == nullptr) {
			throw std::invalid_argument("WordDictionary cannot be null.");
		}
	    else {
			this->wordDict = dictionary;
		}
		this->allowReusedLetters = allowReusedLetters;
		this->guesses = std::vector<std::string>();
		this->lastFeedback = std::vector<Feedback>();
		this->setRandomWord();
	}

	WordleManager::~WordleManager() {
	}

	static std::vector<Model::Feedback> getFeedback(const std::string& guess, const std::string& answer) {
		std::vector<Model::Feedback> feedback(WORD_SIZE, Model::Feedback::Incorrect);
		std::string tempAnswer = answer;

		// First pass: correct letters in correct position
		for (int i = 0; i < WORD_SIZE; ++i) {
			if (guess[i] == tempAnswer[i]) {
				feedback[i] = Model::Feedback::Correct;
				tempAnswer[i] = '*'; // mark as used
			}
		}

		// Second pass: correct letters in wrong position
		for (int i = 0; i < WORD_SIZE; ++i) {
			if (feedback[i] != Model::Feedback::Correct) {
				auto pos = tempAnswer.find(guess[i]);
				if (pos != std::string::npos) {
					feedback[i] = Model::Feedback::WrongPosition;
					tempAnswer[pos] = '*';
				}
			}
		}

		return feedback;
	}

	bool wordHasUniqueLetters(std::string* word) {
	    std::set<char> uniqueLetters;
	    for (char c : *word) {
		    if (uniqueLetters.find(c) != uniqueLetters.end()) {
			    return false; 
		    }
		    uniqueLetters.insert(c);
	    }
	    return true; 
    }

	void Model::WordleManager::setRandomWord() {
        std::string* randomWord = this->wordDict->GetRandomWord();
		if (randomWord == nullptr) {
			throw std::runtime_error("Failed to get a random word from the dictionary.");
		}

		if (!this->allowReusedLetters) {
			while (!wordHasUniqueLetters(randomWord)) {
				randomWord = this->wordDict->GetRandomWord();
			}
		}

		this->answer = toLowerCase(*randomWord);
        #ifdef SHOW_ANSWER
		    std::cout << "Answer: " << *randomWord << std::endl;
        #endif

		this->guesses.clear();
		this->result = "";
		this->lastFeedback.clear();
	}

	void Model::WordleManager::setRandomWord(std::string word) {
		if (word.length() != WORD_SIZE) {
			throw std::invalid_argument("Word length must be " + std::to_string(WORD_SIZE) + " characters.");
		}
        #ifdef SHOW_ANSWER
		    std::cout << "Set answer to: " << word << std::endl;
        #endif
		this->answer = toLowerCase(word);
		this->guesses.clear();
		this->result = "";
		this->lastFeedback.clear();
	}

	std::vector<Model::Feedback> Model::WordleManager::Guess(std::string guess) {
		this->lastFeedback.clear();
		guess = toLowerCase(guess);

		if (guess.length() != WORD_SIZE) {
			this->result = "Invalid guess length.";
			return this->lastFeedback;
		}
		if (this->answer.length() != WORD_SIZE) {
			this->result = "Internal error: answer length mismatch.";
			return this->lastFeedback;
		}
		if (!wordDict->Contains(guess)) {
			this->result = "Invalid word.";
			return this->lastFeedback;
		}

		this->lastFeedback = getFeedback(guess, this->answer);

		std::string feedbackStr;
		for (auto f : this->lastFeedback) {
			switch (f) {
			case Feedback::Correct: feedbackStr += "Correct "; break;
			case Feedback::WrongPosition: feedbackStr += "Wrong Placement "; break;
			case Feedback::Incorrect: feedbackStr += "Incorrect "; break;
			}
		}

		this->guesses.push_back(guess + " -> " + feedbackStr);

		if (guess == this->answer) {
			this->result = "Correct!";
		}
		else if (this->guesses.size() >= NUMBER_OF_GUESSES) {
			this->result = "Game Over. The word was: " + this->answer;
		}
		else {
			this->result = feedbackStr;
		}

		return this->lastFeedback;
	}

	std::vector<std::string> WordleManager::getWordList() const {
		return this->guesses;
	}

	std::vector<Feedback> WordleManager::getLastFeedback() const {
		return this->lastFeedback;
	}

	std::string WordleManager::getResult() const {
		return this->result;
	}

	std::string WordleManager::toLowerCase(const std::string& str) {
		std::string lower = str;
		std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
		return lower;
	}

	std::string WordleManager::GetCorrectWord() const {
		return this->answer;
	}

	std::vector<std::string> WordleManager::GetGuesses() const {
		return this->guesses;
	}

	int WordleManager::GetCurrentGuessIndex() const {
		return static_cast<int>(this->guesses.size());
	}
}