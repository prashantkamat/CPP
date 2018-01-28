#ifndef AGENCY_H
#define AGENCY_H

#include<iostream>
#include<vector>
#include "ppkamat_player.h"
#include "ppkamat_team.h"

using namespace std;

// Variables for agency.cpp

extern string teamName;
extern string teamCity;

extern string playerName;
extern string playerAddress;
extern string playerTeam;
extern int playerId;
extern int playerSalary;
extern int playerPhoneNumber;


Team team;
Player player, pmTest;

vector<Team> tmVector;
vector<Player> plVector;

#endif
