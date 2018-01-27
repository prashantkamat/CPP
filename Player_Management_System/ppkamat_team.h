#ifndef TEAM_H
#define TEAM_H

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Team
{
	string teamName, teamCity;
	int numPlayersinTeam;
	char teamFound;
	

	public:

	void displayTeamInfo(vector<Team>, string);
	void addNewTeam(string, string);
	int validateTeam(vector<Team>, string);
	//void updatePlayerCount(vector<Team>, string);

	//Constructors
	Team();
	Team(string, string);
};

#endif