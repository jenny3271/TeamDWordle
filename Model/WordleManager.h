#pragma once
#define WORD_SIZE 5
#define NUMBER_OF_GUESSES 6

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
		///     To the lower case.
		/// </summary>
		/// <param name="str">The string.</param>
		/// <returns>string lowercase</returns>
		std::string toLowerCase(const std::string& str);
	public:
		/// <summary>
		///     Initializes a new instance of the <see cref="WordleManager"/> class.
		/// </summary>
		WordleManager(WordDictionary* dictionary);
		/// <summary>
		///     Finalizes an instance of the <see cref="WordleManager"/> class.
		/// </summary>
		virtual ~WordleManager();
		/// <summary>
		///     Sets the random word.
		/// </summary>
		void setRandomWord();		
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
	};
};


