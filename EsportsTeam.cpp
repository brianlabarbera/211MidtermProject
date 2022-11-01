#include "EsportsTeam.h"
using namespace std;



void EsportsTeam::addPlayer(EsportsPlayer playerteam) {   //function to add players to Teams vector

	Teams.push_back(playerteam);

}

void EsportsTeam::printTeam() {              //function to print entire team

	for (int i = 0; i < Teams.size(); i++) {

		Teams.at(i).printPlayer();

	}

}
                          
void EsportsTeam::outputTeam(ofstream& outputFile) {       //function to output to a file

	for (int i = 0; i < Teams.size(); i++) {

		Teams.at(i).outputPlayer(outputFile);

	}

}

void EsportsTeam::printTeamPlayers() {             //function to print the names of players preceded by a number

	for (int i = 0; i < Teams.size(); i++) {

		cout << i + 1 << ". " << Teams.at(i).getName() << endl;
	}

}

EsportsPlayer EsportsTeam::getSpecificPlayer(int userinput3) {   //function to return a specific player

	return Teams.at(userinput3 - 1);
}

void EsportsTeam::getPlayerUpdate(int userinput) {   //function to update a player

	Teams.at(userinput - 1).updatePlayer();

}

EsportsTeam::EsportsTeam(string teamName) {  //constructor

	this->teamName = teamName;

}

void EsportsTeam::addPlayer() {   //function to add player
	
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