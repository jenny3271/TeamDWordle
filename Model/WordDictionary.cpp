#include "WordDictionary.h"
#include <fstream>

namespace Model {
	WordDictionary::WordDictionary() 
	{
		trie = new WordTrie();
	}

	WordDictionary::~WordDictionary()
	{
		delete trie;
	}

	bool WordDictionary::load(const std::string& filename) {
		std::ifstream inFile(filename);
		if (!inFile) {
			return false;
		}

		//TODO Only add the words that are of the specified length not all
		std::string word;
		while (std::getline(inFile, word)) {
			if (!word.empty()) {
				trie->Insert(word);
			}
		}

		inFile.close();
		return true;
	}

	bool WordDictionary::contains(const std::string& word) const {
		return trie->Search(word);
	}

};