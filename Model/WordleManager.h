#pragma once
#define SHOW_ANSWER
#define WORD_SIZE 5
#define NUMBER_OF_GUESSES 6

#include <iostream>
#include <string>
#include <vector>
#include "WordDictionary.h"

namespace Model {

	/// <summary>
	///		The Feedback for each letter
	/// </summary>
	enum class Feedback {
		Incorrect,
		WrongPosition,
		Correct
	};

	/// <summary>
	///		The Wordle Manager
	/// </summary>
	class WordleManager
	{
	private:		
		/// <summary>
		///     The word dictionary
		/// </summary>
		WordDictionary* wordDict;		
		/// <summary>
		///     The answer
		/// </summary>
		std::string answer;		
		/// <summary>
		///     The guesses
		/// </summary>
		std::vector<std::string> guesses;		
		/// <summary>
		///     The result
		/// </summary>
		std::string result;		
		/// <summary>
		///     The last feedback
		/// </summary>
		std::vector<Feedback> lastFeedback;		
		/// <summary>
		///     The allow reused letters. If true, the answer may contain reused letters.
		/// </summary>
		bool allowReusedLetters;
		/// <summary>
		///     To the lower case.
		/// </summary>
		/// <param name="str">The string.</param>
		/// <returns>string lowercase</returns>
		std::string toLowerCase(const std::string& str);
	public:		
		/// <summary>
		///     Initializes a new instance of the <see cref="WordleManager"/> class.
		/// </summary>
		/// <param name="dictionary">The dictionary.</param>
		/// <param name="allowReusedLetters">if set to <c>true</c> [allow reused letters].</param>
		WordleManager(WordDictionary* dictionary, bool allowReusedLetters);
		/// <summary>
		///     Finalizes an instance of the <see cref="WordleManager"/> class.
		/// </summary>
		virtual ~WordleManager();
		/// <summary>
		///     Sets the random word. If the answer cannot contain reused letters, the word is selected from the dictionary must have unique characters.
		/// </summary>
		void setRandomWord();		
		/// <summary>
		///     Sets the random word.
		/// </summary>
		/// <param name="word">The word.</param>
		void setRandomWord(std::string word);
		/// <summary>
		///     Guesses the specified guess.
		/// </summary>
		/// <param name="guess">The guess.</param>
		/// <returns>the feeback from the guess</returns>
		std::vector<Feedback> Guess(std::string guess);
		/// <summary>
		///     Gets the word list.
		/// </summary>
		/// <returns>list of words</returns>
		std::vector<std::string> getWordList() const;
		/// <summary>
		///     Gets the last feedback.
		/// </summary>
		/// <returns>the feedback for the last guess</returns>
		std::vector<Feedback> getLastFeedback() const;		
		/// <summary>
		///     Gets the result.
		/// </summary>
		/// <returns>the result</returns>
		std::string getResult() const;
		/// <summary>
        ///     Gets the correct word.
        /// </summary>
        /// <returns>The correct answer.</returns>
		std::string GetCorrectWord() const;
		/// <summary>
		///     Gets the list of guesses
		/// </summary>
		/// <returns>the guesses</returns>
		std::vector<std::string> GetGuesses() const;
		/// <summary>
		///     Gets the current guess index (i.e., total guesses made).
		/// </summary>
		/// <returns>The number of guesses made.</returns>
		int GetCurrentGuessIndex() const;
	};
};


