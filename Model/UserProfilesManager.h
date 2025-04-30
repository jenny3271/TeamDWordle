#pragma once

#include "UserProfile.h"
#include <unordered_map>
#include <fstream>
#include <string>

namespace Model {	
	/// <summary>
	///		The User Profiles Manager. Stores and manages user profiles in a text file.
	/// </summary>
	class UserProfilesManager {
	private:
	/// <summary>
	///     The filename
	/// </summary>
	std::string filename;

	/// <summary>
	///     The profiles
	/// </summary>
	std::unordered_map<std::string, UserProfile> profiles;

	public:		
		/// <summary>
		///     Initializes a new instance of the <see cref="UserProfilesManager"/> class.
		/// </summary>
		/// <param name="filename">The filename.</param>
		UserProfilesManager(const std::string& filename);
		
		/// <summary>
		///     Loads the profiles from the file.
		/// </summary>
		void LoadProfiles();	

		/// <summary>
		///     Saves the profiles to the file. 
		/// </summary>
		void SaveProfiles() const;
		
		/// <summary>
		///     Determines whether the specified username has user.
		/// </summary>
		/// <param name="username">The username.</param>
		/// <returns>
		///   <c>true</c> if the specified username has user; otherwise, <c>false</c>.
		/// </returns>
		bool HasUser(const std::string& username) const;
		
		/// <summary>
		///     Gets the user.
		/// </summary>
		/// <param name="username">The username.</param>
		/// <returns>the user profile associated with the username</returns>
		UserProfile& GetUser(const std::string& username);
		
		/// <summary>
		///     Adds the user to the profiles.
		/// </summary>
		/// <param name="user">The user.</param>
		void AddUser(const UserProfile& user);
	};
}
