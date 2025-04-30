#include "UserProfilesManager.h"
#include <iostream>

namespace Model {

	UserProfilesManager::UserProfilesManager(const std::string& filename)
		: filename(filename) {
		this->LoadProfiles();
	}

	void UserProfilesManager::LoadProfiles() {
		std::ifstream inFile(this->filename);
		if (!inFile.is_open()) {
			std::cerr << "Could not open file for reading: " << this->filename << std::endl;
			return;
		}

		std::string line;
		while (std::getline(inFile, line)) {
			if (!line.empty()) {
				try {
					UserProfile profile = UserProfile::Deserialize(line);
					this->profiles[profile.GetUsername()] = profile;
				}
				catch (const std::exception& e) {
					std::cerr << "Error deserializing line: " << line << "\n" << e.what() << std::endl;
				}
			}
		}

		inFile.close();
	}

	void UserProfilesManager::SaveProfiles() const {
		std::ofstream outFile(this->filename);
		if (!outFile.is_open()) {
			std::cerr << "Could not open file for writing: " << this->filename << std::endl;
			return;
		}

		for (const auto& pair : this->profiles) {
			outFile << pair.second.Serialize() << '\n';
		}

		outFile.close();
	}

	bool UserProfilesManager::HasUser(const std::string& username) const {
		return this->profiles.find(username) != this->profiles.end();
	}

	UserProfile& UserProfilesManager::GetUser(const std::string& username) {
		return this->profiles.at(username);
	}

	void UserProfilesManager::AddUser(const UserProfile& user) {
		this->profiles[user.GetUsername()] = user;
	}
}