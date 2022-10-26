#include "EsportsTeam.h"
using namespace std;



void EsportsTeam::addPlayer(EsportsPlayer playerteam) {

	Teams.push_back(playerteam);

}

void EsportsTeam::printTeam() {

	for (int i = 0; i < Teams.size(); i++) {

		Teams.at(i).printPlayer();

	}

}

void EsportsTeam::printTeamPlayers() {

	for (int i = 0; i < Teams.size(); i++) {

		cout << i + 1 << ". " << Teams.at(i).getName() << endl;
	}

}

EsportsPlayer EsportsTeam::getSpecificPlayer(int userinput3) {

	return Teams.at(userinput3 - 1);
	

}