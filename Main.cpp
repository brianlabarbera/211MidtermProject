#include "EsportsTeam.h"
#include "EsportsPlayer.h"
using namespace std;

void viewPlayer(EsportsTeam team);
void updatePlayer(EsportsTeam& team);
void addPlayer(EsportsTeam& team);

int main() {

	vector<EsportsPlayer> players;
	EsportsTeam FaZe("FaZe");
	EsportsTeam Cloud9("Cloud9");

	ifstream playerFile("Players.txt");
	ofstream outputFile("Newplayers.txt");

	string tempName, tempTeamName;
	int tempKills, tempDeaths, userinput;
	double tempHeadshotPercentage, tempKillDeathRatio;
	char tempRating;
	
	while (playerFile >> tempName >> tempTeamName >> tempKills >> tempDeaths >> tempHeadshotPercentage >> tempKillDeathRatio >> tempRating) {

		EsportsPlayer player(tempName, tempTeamName, tempKills, tempDeaths, tempHeadshotPercentage, tempKillDeathRatio, tempRating);

		players.push_back(player);
	}

	playerFile.close();

	for (int i = 0; i < players.size(); i++) {

		if (players.at(i).getTeamName() == "FaZe") {

			FaZe.addPlayer(players.at(i));
			
		}

		else {
			Cloud9.addPlayer(players.at(i));
		}

	}
	do {
		cout << "Enter the number for what you'd like to do:" << endl;
		cout << "1. View all players" << endl;
		cout << "2. View a player" << endl;
		cout << "3. View a team" << endl;
		cout << "4. Update a player" << endl;
		cout << "5. Add a player" << endl;
		cout << "6. Export data to file" << endl;
		cout << "Enter any other button to end the program." << endl;

		cout << endl;

		cin >> userinput;

		cout << endl;

		switch (userinput) {

		case 1:
			FaZe.printTeam();
			cout << endl;
			Cloud9.printTeam();
			cout << endl;

			break;

			
		case 2:
			int userinput2;
			cout << "Which team?" << endl;
			cout << "1. FaZe" << endl;
			cout << "2. Cloud9" << endl;

			cout << endl;

			cin >> userinput2;

			cout << endl;

			if (userinput2 == 1) {
				viewPlayer(FaZe);
			}

			else if (userinput2 == 2) {
				viewPlayer(Cloud9);
			}

			break;
		
		case 3:
			int userinput4;
			cout << "Which team?" << endl;
			cout << "1. FaZe" << endl;
			cout << "2. Cloud9" << endl;
			
			cout << endl;

			cin >> userinput4;
			
			cout << endl;

			if (userinput4 == 1) {
				FaZe.printTeam();
				cout << endl;
			}

			else if (userinput4 == 2) {
				Cloud9.printTeam();
				cout << endl;
			}

			break;

		case 4:
			int userinput5;
			cout << "Which team?" << endl;
			cout << "1. FaZe" << endl;
			cout << "2. Cloud9" << endl;

			cout << endl;

			cin >> userinput5;

			cout << endl;

			if (userinput5 == 1) {
				updatePlayer(FaZe);
			}

			else if (userinput5 == 2) {
				updatePlayer(Cloud9);
			}

			break;

		case 5:
			int userinput6;
			cout << "Which team?" << endl;
			cout << "1. FaZe" << endl;
			cout << "2. Cloud9" << endl;

			cout << endl;

			cin >> userinput6;

			cout << endl;

			if (userinput6 == 1) {
				addPlayer(FaZe);
			}

			else if (userinput6 == 2) {
				addPlayer(Cloud9);
			}

			break;

		case 6:
			FaZe.outputTeam(outputFile);
			Cloud9.outputTeam(outputFile);
			
		}

	}  while (userinput > 0);

	
	return 0;
}

void viewPlayer(EsportsTeam team) {

	int userinput3;

	cout << "Which player?" << endl;
	team.printTeamPlayers();

	cout << endl;

	cin >> userinput3;

	team.getSpecificPlayer(userinput3).printPlayer();

	cout << endl;
}

void updatePlayer(EsportsTeam& team) {

	int userinput;

	cout << "Which player?" << endl;
	team.printTeamPlayers();

	cout << endl;

	cin >> userinput;

	team.getPlayerUpdate(userinput);

	cout << endl;
}

void addPlayer(EsportsTeam& team) {

	team.addPlayer();
}