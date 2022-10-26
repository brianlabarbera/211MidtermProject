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
	vector<EsportsPlayer> Teams;

public:
	void addPlayer(EsportsPlayer playerteam);
	void printTeam();
	void printTeamPlayers();
	EsportsPlayer getSpecificPlayer(int userinput3);
};

#endif