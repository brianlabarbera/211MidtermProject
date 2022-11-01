#ifndef ESPORTSTEAM_H
#define ESPORTSTEAM_H
#include "EsportsPlayer.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class EsportsTeam {

private:
	vector<EsportsPlayer> Teams; //players on a team
	string teamName;

public:
	void addPlayer(EsportsPlayer playerteam);
	void printTeam();
	void printTeamPlayers();
	void addPlayer();
	void getPlayerUpdate(int userinput);
	void outputTeam(ofstream& outputFile);
	EsportsPlayer getSpecificPlayer(int userinput3);
	EsportsTeam(string teamName); //constructor
};

#endif