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

void EsportsTeam::outputTeam(ofstream& outputFile) {

	for (int i = 0; i < Teams.size(); i++) {

		Teams.at(i).outputPlayer(outputFile);

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

void EsportsTeam::getPlayerUpdate(int userinput) {

	Teams.at(userinput - 1).updatePlayer();

}

EsportsTeam::EsportsTeam(string teamName) {

	this->teamName = teamName;

}

void EsportsTeam::addPlayer() {
	
	string name;
	int kills;
	int deaths;
	double headshotPercentage;
	double killDeathRatio;
	char rating;

	cout << "Enter player name" << endl;
	cin >> name;

	cout << "Enter player kills" << endl;
	cin >> kills;

	cout << "Enter player deaths" << endl;
	cin >> deaths;

	cout << "Enter player headshot percentage" << endl;
	cin >> headshotPercentage;

	cout << "Enter player K/D ratio" << endl;
	cin >> killDeathRatio;

	cout << "Enter player rating" << endl;
	cin >> rating;

	EsportsPlayer newPlayer(name, teamName, kills, deaths, headshotPercentage, killDeathRatio, rating);

	Teams.push_back(newPlayer);
}