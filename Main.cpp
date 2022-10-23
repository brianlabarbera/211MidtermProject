#include "EsportsTeam.h"
#include "EsportsPlayer.h"
using namespace std;

int main() {

	vector<EsportsPlayer> players;
	EsportsTeam FaZe;
	EsportsTeam Cloud9;

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

	for (int i = 0; i < players.size(); i++) {

		if (players.at(i).getTeamName() == "FaZe") {

			FaZe.addPlayer(players.at(i));
			
		}

		else {
			Cloud9.addPlayer(players.at(i));
		}

	}

	FaZe.printTeam();

	return 0;
}