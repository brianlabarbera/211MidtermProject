#ifndef ESPORTSPLAYER_H
#define ESPORTSPLAYER_H
#include <iostream>
#include <string>

class EsportsPlayer {

private:
	string name;
	string teamName;
	int kills;
	int deaths;
	double headshotPercentage;
	double killDeathRatio;
	char rating;
	
public:
	EsportsPlayer(string playerInformation);
	string getName();
	string getTeamName();
	int getKills();
	int getDeaths();
	double getHeadshotPercentage();
	double getKillDeathRatio();
	char getRating();


};

#endif
