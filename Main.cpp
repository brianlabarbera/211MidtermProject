#include <iostream>
#include "EsportsTeam.h"
#include "EsportsPlayer.h"
using namespace std;

int main() {

	vector<EsportsPlayer> players;

	ifstream playerFile("Players.txt");

	string tempName, tempTeamName;
	int tempKills, tempDeaths;
	double tempHeadshotPercentage, tempKillDeathRatio;
	char tempRating;
	
	while (!playerFile.eof()) {
		playerFile >> tempName >> tempTeamName >> tempKills >> tempDeaths >> tempHeadshotPercentage >> tempKillDeathRatio >> tempRating;

		EsportsPlayer player(tempName, tempTeamName, tempKills, tempDeaths, tempHeadshotPercentage, tempKillDeathRatio, tempRating);

		players.push_back(player);
	}

	playerFile.close();

	cout << players.at(2).getName();

	return 0;
}