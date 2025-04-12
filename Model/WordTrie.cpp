#include "WordTrie.h"

namespace Model {

    WordTrie::WordTrie() {
        root = new TrieNode();
    }

    WordTrie::~WordTrie() {
        deleteTrie(root);
    }

    void WordTrie::Insert(const std::string& word) {
        TrieNode* current = root;
        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                current->children[ch] = new TrieNode();
            }
            current = current->children[ch];
        }
        current->isEndOfWord = true;
    }

    bool WordTrie::Search(const std::string& word) const {
        TrieNode* current = root;
        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                return false;
            }
            current = current->children[ch];
        }
        return current->isEndOfWord;
    }

    void WordTrie::deleteTrie(TrieNode* node) {
        for (auto& pair : node->children) {
            deleteTrie(pair.second);
        }
        delete node;
    }

};
