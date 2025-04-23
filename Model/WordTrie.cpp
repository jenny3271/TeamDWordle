#include "WordTrie.h"
#include <iostream>

namespace Model {

    WordTrie::WordTrie() {
        root = new TrieNode();
    }

    WordTrie::~WordTrie() {
        deleteTrie(root);
        this->root = nullptr;
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
        for (char character : word) {
            if (current->children.find(character) == current->children.end()) {
                return false;
            }
            current = current->children[character];
        }
        return current->isEndOfWord;
    }

    void WordTrie::deleteTrie(TrieNode* node) {
        if (node == nullptr) {
            return;
        }

        std::vector<TrieNode*> childNodes;
        for (const auto& pair : node->children) {
            childNodes.push_back(pair.second);
        }

        for (TrieNode* child : childNodes) {
            deleteTrie(child);
        }

        node->children.clear(); 
        delete node;
    }

    std::string* WordTrie::GetRandomWord() const {
        if (this->root == nullptr) {
            std::cerr << "Error: Trie has been deleted or not initialized.\n";
            return nullptr;
        }

        std::string randomWord;
        TrieNode* current = root;

        static bool seeded = false;
        if (!seeded) {
            srand(static_cast<unsigned int>(time(0)));
            seeded = true;
        }

        while (true) {
            if (current->children.empty()) {
                return nullptr;
            }

            int randomIndex = rand() % current->children.size();
            auto it = current->children.begin();
            std::advance(it, randomIndex);

            randomWord += it->first;
            current = it->second;

            if (current->isEndOfWord) {
                std::cout << "Random word found: " << randomWord << std::endl;
                return new std::string(randomWord);
            }
        }
    }

};
