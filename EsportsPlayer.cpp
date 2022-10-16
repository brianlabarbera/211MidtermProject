#include "EsportsPlayer.h"
using namespace std;

EsportsPlayer::EsportsPlayer(string playerInformation) {
	name = "NoName";
	teamName = "NoTeam";
	kills = 0;
	deaths = 0;
	headshotPercentage = 0.0;
	killDeathRatio = 0.0;
	rating = ' ';
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