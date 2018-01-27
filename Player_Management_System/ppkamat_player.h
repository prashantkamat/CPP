#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include<string>
#include<vector>

using namespace std; 

class Player
{
	string playerName, playerTeam, playerPosition, playerAddress;
	char playerFound;
	int playerId, playerCellNo, playerSalary, id_exists;
	

	public:
	
	//
	string insertNewPlayer();

	// Search functions
	void searchPlayerByName(vector<Player>,string);
	void searchPlayerByPhoneNumber(vector<Player>,int);
	void searchPlayerById(vector<Player>,int);

	// Sort Functions
	void sortPlayerByName(vector<Player>);
	void sortPlayerById(vector<Player>);
	void sortPlayerBySalary(vector<Player>);
	void sortPlayerInTeamByName(vector<Player>,string);
	void sortPlayerInTeamById(vector<Player>,string);
	void sortPlayerInTeamBySalary(vector<Player>,string);

	// Display Functions
	void displayAllPlayers(vector<Player>);
	void displayPlayerInfoByTeam(vector<Player>, string);
	
	// Validate
	int checkPlayerId(int);

	// Constructors
	Player();
	Player(string, string, int, int, string, string, int);  
};


#endif