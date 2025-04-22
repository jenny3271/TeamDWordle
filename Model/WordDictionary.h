#pragma once
#include "WordTrie.h"
#include <string>

namespace Model {	
	/// <summary>
	///		This class represents a word dictionary.
	/// 	It uses a trie data structure to store and search for words efficiently.
	/// </summary>
	/// <author> Kate Anglin </author>
	/// <version> Spring 2025 </version>
	class WordDictionary
	{
	private:		
		/// <summary>
		///     The trie
		/// </summary>
		WordTrie* trie;

	public:		
		/// <summary>
		///     Initializes a new instance of the <see cref="WordDictionary"/> class.
		/// </summary>
		WordDictionary();
		
		/// <summary>
		///     Finalizes an instance of the <see cref="WordDictionary"/> class.
		/// </summary>
		~WordDictionary();
		
		/// <summary>
		///     Loads the specified filename.
		/// </summary>
		/// <param name="filename">The filename.</param>
		/// /// <param name="wordSize">Size of the word.</param>
		/// <returns>true if loaded; false otherwise</returns>
		bool Load(const std::string& filename, int wordSize);
		
		/// <summary>
		///     Determines whether [contains] [the specified word].
		/// </summary>
		/// <param name="word">The word to search for</param>
		/// <returns>
		///   <c>true</c> if [contains] [the specified word]; otherwise, <c>false</c>.
		/// </returns>
		bool Contains(const std::string& word) const;
		
		/// <summary>
		///     Gets the random word.
		/// </summary>
		/// <returns>random word</returns>
		std::string* GetRandomWord() const;
	};
}

