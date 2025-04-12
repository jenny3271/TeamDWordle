#pragma once
#include "TrieNode.h"
#include <string>

namespace Model {    
    /// <summary>
	///     This class represents a word trie.
    /// </summary>
	/// <author> Kate Anglin </author>
	/// <version> Spring 2025 </version>
    class WordTrie {
    private:        
        /// <summary>
		///     The root node of the trie
        /// </summary>
        TrieNode* root;
        
        /// <summary>
        ///     Deletes the trie.
        /// </summary>
        /// <param name="node">The root node.</param>
        void deleteTrie(TrieNode* node);

    public:        
        /// <summary>
        ///    Initializes a new instance of the <see cref="WordTrie"/> class.
        /// </summary>
        WordTrie();     

        /// <summary>
        ///     Finalizes an instance of the <see cref="WordTrie"/> class.
        /// </summary>
        ~WordTrie();
        
        /// <summary>
        ///     Inserts the specified word.
        /// </summary>
        /// <param name="word">The word.</param>
        void Insert(const std::string& word);
        
        /// <summary>
        ///     Searches the specified word.
        /// </summary>
        /// <param name="word">The word.</param>
        /// <returns>true if found; false otherwise</returns>
        bool Search(const std::string& word) const;
    };

};