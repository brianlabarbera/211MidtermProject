#ifndef ESPORTSTEAM_H
#define ESPORTSTEAM_H
#include "EsportsPlayer.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class EsportsTeam {

private:
	vector<EsportsPlayer> players;


public:
	EsportsTeam(string filePath);
};

#endif