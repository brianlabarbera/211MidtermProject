#include "EsportsPlayer.h"

using namespace std;

EsportsPlayer::EsportsPlayer(string name, string teamName, int kills, int deaths, double headshotPercentage, double killDeathRatio, char rating) {
	this->name = name;
	this->teamName = teamName;
	this->kills = kills;
	this->deaths = deaths;
	this->headshotPercentage = headshotPercentage;
	this->killDeathRatio = killDeathRatio;
	this->rating = rating;
}

string EsportsPlayer::getName() {
	return name;
}

string EsportsPlayer::getTeamName() {
	return teamName;
}

int EsportsPlayer::getKills() {
	return kills;
}

int EsportsPlayer::getDeaths() {
	return deaths;
}

double EsportsPlayer::getHeadshotPercentage() {
	return headshotPercentage;
}

double EsportsPlayer::getKillDeathRatio() {
	return killDeathRatio;
}

char EsportsPlayer::getRating() {
	return rating;
}

void EsportsPlayer::printPlayer() {

	cout << name << " " << teamName << " " << kills << " " << deaths << " " << headshotPercentage << " " << killDeathRatio << " " << rating << endl;

}