#include "EsportsPlayer.h"

using namespace std;

EsportsPlayer::EsportsPlayer(string name, string teamName, int kills, int deaths, double headshotPercentage, double killDeathRatio, char rating) {  //constructor
	this->name = name;
	this->teamName = teamName;
	this->kills = kills;
	this->deaths = deaths;
	this->headshotPercentage = headshotPercentage;
	this->killDeathRatio = killDeathRatio;
	this->rating = rating;
}

string EsportsPlayer::getName() {  //function to return name
	return name;
}

string EsportsPlayer::getTeamName() { //function to return team name
	return teamName;
}

int EsportsPlayer::getKills() {  //function to return kills
	return kills;
}

int EsportsPlayer::getDeaths() { //function to return deaths
	return deaths;
}

double EsportsPlayer::getHeadshotPercentage() { //function to return headshot percentage
	return headshotPercentage;
}

double EsportsPlayer::getKillDeathRatio() { //function to return k/d ratio
	return killDeathRatio;
}

char EsportsPlayer::getRating() { //function to return rating
	return rating;
}

void EsportsPlayer::printPlayer() { //function to print a player

	cout << name << " " << teamName << " " << kills << " " << deaths << " " << headshotPercentage << " " << killDeathRatio << " " << rating << endl;

}

void EsportsPlayer::outputPlayer(ofstream& outputFile) {  //function to export a player to a file

	outputFile << name << " " << teamName << " " << kills << " " << deaths << " " << headshotPercentage << " " << killDeathRatio << " " << rating << endl;

	cout << "Data exported to Newplayers.txt" << endl;

}

void EsportsPlayer::updatePlayer() {  //function to update a player
	
	int userinput;

	cout << endl;
	cout << "Which stats?" << endl;
	cout << "1. Kills" << endl;
	cout << "2. Deaths" << endl;
	cout << "3. Headshot Percentage" << endl;
	cout << "4. KD Ratio" << endl;
	cout << "5. Rating" << endl;
	
	cin >> userinput;

	cout << endl;

	switch (userinput) {

	case 1: 
		int newkills;

		cout << "Enter new kills" << endl;
		cin >> newkills;

		while (newkills < 0) {
			cout << "Please enter a positive integer" << endl;
			cin >> newkills;
		}

		cout << endl;

		kills = newkills;

		cout << "Kills are now set to " << kills << endl;

		break;

	case 2: 
		int newdeaths;

		cout << "Enter new deaths" << endl;
		cin >> newdeaths;

		while (newdeaths < 0) {
			cout << "Please enter a positive integer" << endl;
			cin >> newdeaths;
		}

		cout << endl;

		deaths = newdeaths;

		cout << "Deaths are now set to " << deaths << endl;

		break;

	case 3:
		double newHP;

		cout << "Enter new headshot percentage" << endl;
		cin >> newHP;

		while (newHP < 0.0 || newHP > 1.0) {
			cout << "Please enter a decimal" << endl;
			cin >> newHP;
		}

		cout << endl;
	    
		headshotPercentage = newHP;

		cout << "Headshot percentage is now set to " << headshotPercentage << endl;
		

		break;

	case 4:
		double newKD;

		cout << "Enter new K/D Ratio" << endl;
		cin >> newKD;

		while (newKD < 0.0 || newKD > 5.0) {
			cout << "Please enter a decimal" << endl;
			cin >> newKD;
		}

		cout << endl;

		killDeathRatio = newKD;

		cout << "K/D ratio is now set to " << killDeathRatio << endl;

		break;

	case 5:
		char newrating;

		cout << "Enter new rating" << endl;
		cin >> newrating;

		while (newrating != 'A' && newrating != 'B' && newrating != 'C' && newrating != 'D' && newrating != 'F') {
			cout << "Please enter A B C D or F" << endl;
			cin >> newrating;
		}

		cout << endl;

		rating = newrating;

		cout << "Rating is now set to " << rating << endl;

		break;


	}
}
