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