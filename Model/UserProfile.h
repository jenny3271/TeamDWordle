#pragma once
#include <array>
#include <string>

namespace Model
{
	/// <summary>
	/// Represents a user profile containing game statistics for the Wordle Game.
	/// Provides methods to update statistics and retrieve information.
	/// </summary>
	class UserProfile
	{
	private:
		std::string username; ///< The username of the player.
		int totalGamesPlayed; ///< Total number of games played.
		int wins; ///< Total number of wins.
		int currentWinStreak; ///< Current winning streak.
		int maxWinStreak; ///< Maximum winning streak.
		int lastCorrectGuessIndex; // Stores the zero-based index of the last correct guess
		std::array<int, 6> guessDistribution; ///< Distribution of guesses (1-6)

	public:
		/// <summary>
		/// Initializes a new instance of the UserProfile class.
		/// </summary>
		/// <param name="username">The username for this profile.</param>
		UserProfile(const std::string& username);
		
		/// <summary>
		/// Initializes a new instance of the <see cref="UserProfile"/> class.
		/// </summary>
		UserProfile();

		/// <summary>
		/// Gets the username associated with this profile.
		/// </summary>
		/// <returns>The username as a String.</returns>
		std::string GetUsername() const;

		/// <summary>
		/// Gets the total number of games played.
		/// </summary>
		/// <returns>The total games played as an integer.</returns>
		int GetTotalGamesPlayed() const;

		/// <summary>
		/// Gets the total number of wins.
		/// </summary>
		/// <returns>The total wins as an integer.</returns>
		int GetWins() const;

		/// <summary>
		/// Gets the current win streak.
		/// </summary>
		/// <returns>The current win streak as an integer.</returns>
		int GetCurrentWinStreak() const;

		/// <summary>
		/// Gets the maximum win streak achieved.
		/// </summary>
		/// <returns>The maximum win streak as an integer.</returns>
		int GetMaxWinStreak() const;

		/// <summary>
		/// Calculates the win percentage.
		/// </summary>
		/// <returns>The win percentage as an int.</returns>
		int GetWinPercentage() const;

		/// <summary>
		/// Gets the zero-based index of the last correct guess.
		/// </summary>
		/// <returns>The index of the last correct guess as an integer, or -1 if no guess has been recorded.</returns>
		int GetLastCorrectGuessIndex() const;

		/// <summary>
		/// Gets the guess distribution as an array.
		/// </summary>
		/// <returns>An array representing guess counts for 1 through 6 guesses.</returns>
		const std::array<int, 6>& GetGuessDistribution() const;

		/// <summary>
		/// Updates the statistics for a completed game.
		/// </summary>
		/// <param name="gameWon">True if the game was won, otherwise false.</param>
		/// <param name="guessCount">The number of guesses it took to solve the puzzle.</param>
		void UpdateStats(bool gameWon, int guessCount);

		/// <summary>
		/// Serializes the user profile to a string for file saving.
		/// </summary>
		/// <returns>The serialized data as a String.</returns>
		std::string Serialize() const;

		/// <summary>
		/// Deserializes the user profile from a string.
		/// </summary>
		/// <param name="data">The serialized data as a String.</param>
		static UserProfile Deserialize(const std::string& data);
	};
}
