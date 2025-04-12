#pragma once
#include <unordered_map>
namespace Model {
    /// <summary>
	///     The TrieNode class represents a node in a trie data structure.
    /// </summary>
	/// <author> Kate Anglin </author>
	/// <version> Spring 2025 </version>
    class TrieNode
    {
    public:        
        /// <summary>
        ///     The children
        /// </summary>
        std::unordered_map<char, TrieNode*> children;
        
        /// <summary>
        ///     The is end of word
        /// </summary>
        bool isEndOfWord;
                
        /// <summary>
        ///     Initializes a new instance of the <see cref="TrieNode"/> class.
        /// </summary>
        TrieNode();
        
        /// <summary>
        ///     Finalizes an instance of the <see cref="TrieNode"/> class.
        /// </summary>
        ~TrieNode();
    };
}


