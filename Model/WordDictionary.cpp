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

	bool WordDictionary::Load(const std::string& filename, int wordSize) {
		std::ifstream inFile(filename);
		if (!inFile) {
			return false;
		}

		std::string word;
		while (std::getline(inFile, word)) {
			if (!word.empty()) {
				if (word.size() == wordSize) {
                    trie->Insert(word);
				}
			}
		}

		inFile.close();
		return true;
	}

	bool WordDictionary::Contains(const std::string& word) const {
		return trie->Search(word);
	}

	std::string* WordDictionary::GetRandomWord() const {
		return trie->GetRandomWord();
	}

};