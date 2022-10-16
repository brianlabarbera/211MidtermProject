#include "EsportsTeam.h"
using namespace std;

EsportsTeam::EsportsTeam(string filePath) {

	ifstream playerFile("Players.txt");

	string lineContents;
	while (!playerFile.eof()) {
		getline(playerFile, lineContents);

		EsportsPlayer p(lineContents);
		players.push_back(p);
	}

	playerFile.close();

}