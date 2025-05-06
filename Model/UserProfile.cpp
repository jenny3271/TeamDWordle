#include "UserProfile.h"

#include <iostream>
#include <sstream>

namespace Model
{
	UserProfile::UserProfile(const std::string& username)
	{
		this->username = username;
		this->totalGamesPlayed = 0;
		this->wins = 0;
		this->currentWinStreak = 0;
		this->maxWinStreak = 0;
		this->guessDistribution.fill(0);
		this->lastCorrectGuessIndex = -1; 
	}

	UserProfile::UserProfile()
	{
		this->totalGamesPlayed = 0;
		this->wins = 0;
		this->currentWinStreak = 0;
		this->maxWinStreak = 0;
		this->guessDistribution.fill(0);
		this->lastCorrectGuessIndex = -1;
	}

	UserProfile::UserProfile(const std::string& username, const std::string& correctWord, const std::vector<std::string> guesses, int totalGuessesMade)
	{
		this->username = username;
		this->totalGamesPlayed = 0;
		this->wins = 0;
		this->currentWinStreak = 0;
		this->maxWinStreak = 0;
		this->guessDistribution.fill(0);
		this->lastCorrectGuessIndex = -1;
		this->correctWord = correctWord;
		this->guesses = guesses;
		this->totalGuessesMade = totalGuessesMade;
	}

	std::string UserProfile::GetUsername() const {
		return this->username;
	}

	int UserProfile::GetTotalGamesPlayed() const {
		return this->totalGamesPlayed;
	}

	int UserProfile::GetWins() const {
		return this->wins;
	}

	int UserProfile::GetCurrentWinStreak() const {
		return this->currentWinStreak;
	}

	int UserProfile::GetMaxWinStreak() const {
		return this->maxWinStreak;
	}

	int UserProfile::GetWinPercentage() const {
		return this->totalGamesPlayed > 0 ? static_cast<int>((static_cast<double>(this->wins) / this->totalGamesPlayed) * 100) : 0;
	}

	int UserProfile::GetLastCorrectGuessIndex() const {
		return this->lastCorrectGuessIndex;
	}

	const std::array<int, 6>& UserProfile::GetGuessDistribution() const {
		return this->guessDistribution;
	}

	std::string UserProfile::GetCorrectWord() const {
		return this->correctWord;
	}

	const std::vector<std::string> UserProfile::GetGuesses() const {
		return this->guesses;
	}

	int UserProfile::GetTotalGuessesMade() const {
		return this->totalGuessesMade;
	}

	void UserProfile::UpdateStats(bool gameWon, int guessCount, const std::string& correctWord, const std::vector<std::string>& guesses, int totalGuessesMade) {
		this->totalGamesPlayed++;

		if (gameWon) {
			this->wins++;
			this->currentWinStreak++;

			if (this->currentWinStreak > this->maxWinStreak) {
				this->maxWinStreak = this->currentWinStreak;
			}

			if (guessCount > 0 && guessCount <= 6) {
				size_t index = static_cast<size_t>(guessCount - 1);
				this->lastCorrectGuessIndex = index;

				if (this->guessDistribution[index] < std::numeric_limits<long long>::max()) {
					this->guessDistribution[index]++;
				}
				else {
					std::cerr << "Overflow detected in guessDistribution[" << index << "]!" << std::endl;
				}
			}
		}
		else {
			this->currentWinStreak = 0;
			this->lastCorrectGuessIndex = -1;
		}

		this->correctWord = correctWord;
		this->guesses = guesses;
		this->totalGuessesMade = totalGuessesMade;
	}

	std::string UserProfile::Serialize() const {
		// Format: username|totalGamesPlayed|wins|currentWinStreak|maxWinStreak|guess1,guess2,...,guess6|correctWord|guess1 guess2 guess3 ...|totalGuessesMade
		std::ostringstream oss;
		oss << this->username << "|"
			<< this->totalGamesPlayed << "|"
			<< this->wins << "|"
			<< this->currentWinStreak << "|"
			<< this->maxWinStreak << "|";

		for (size_t i = 0; i < this->guessDistribution.size(); ++i) {
			oss << this->guessDistribution[i];
			if (i < this->guessDistribution.size() - 1) {
				oss << ",";
			}
		}

		oss << "|"
			<< this->correctWord << "|";

		for (const auto& guess : this->guesses) {
			oss << guess << " ";
		}
		oss << "|"
			<< this->totalGuessesMade;

		return oss.str();
	}

	UserProfile UserProfile::Deserialize(const std::string& data) {
		std::istringstream iss(data);
		std::string token;

		std::getline(iss, token, '|');
		std::string username = token;

		std::getline(iss, token, '|');
		int totalGamesPlayed = std::stoi(token);

		std::getline(iss, token, '|');
		int wins = std::stoi(token);

		std::getline(iss, token, '|');
		int currentWinStreak = std::stoi(token);

		std::getline(iss, token, '|');
		int maxWinStreak = std::stoi(token);

		std::getline(iss, token, '|');
		std::istringstream guessStream(token);
		std::array<int, 6> guessDistribution = { 0 };
		for (size_t i = 0; i < 6; ++i) {
			std::getline(guessStream, token, ',');
			guessDistribution[i] = std::stoi(token);
		}

		std::getline(iss, token, '|');
		std::string correctWord = token;

		std::getline(iss, token, '|');
		std::vector<std::string> guesses;
		std::istringstream guessListStream(token);
		while (std::getline(guessListStream, token, ' ')) {
			guesses.push_back(token);
		}

		std::getline(iss, token, '|');
		int totalGuessesMade = std::stoi(token);

		UserProfile profile(username);
		profile.totalGamesPlayed = totalGamesPlayed;
		profile.wins = wins;
		profile.currentWinStreak = currentWinStreak;
		profile.maxWinStreak = maxWinStreak;
		profile.guessDistribution = guessDistribution;
		profile.correctWord = correctWord;
		profile.guesses = guesses;
		profile.totalGuessesMade = totalGuessesMade;

		return profile;
	}
}
