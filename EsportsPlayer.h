#ifndef ESPORTSPLAYER_H
#define ESPORTSPLAYER_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class EsportsPlayer {

private:
	string name, teamName;
	int kills, deaths;
	double headshotPercentage, killDeathRatio;
	char rating;
	
public:
	EsportsPlayer(string name, string teamName, int kills, int deaths, double headshotPercentage, double killDeathRatio, char rating); //constructor
	string getName();
	string getTeamName();
	int getKills();
	int getDeaths();
	double getHeadshotPercentage();
	double getKillDeathRatio();
	char getRating();
	void printPlayer();
	void updatePlayer();
	void outputPlayer(ofstream& outputFile);
};

#endif
