#include<iostream>
#include "ppkamat_team.h"
#include<string>
using namespace std;

Team::Team(){}


Team::Team(string tm, string ct)
{
	this->teamName = tm;
	this->teamCity = ct;
}


void Team::addNewTeam(string tm, string ct)
{
	this->teamName = tm;
	this->teamCity = ct;
}

int Team::validateTeam(vector<Team> tv, string tm)
{
		teamFound = 'N';
		
		for(int i=0; i< tv.size();i++)
		{
			if(tm == tv[i].teamName)
			{
				teamFound = 'Y';	
				return 1;
			}
		}
		
		if(teamFound == 'N')
			{
				cout<<"Team not found."<<endl;
				return 0;
			}
		
		
}

void Team::displayTeamInfo(vector<Team> tv, string tm)
{
		teamFound = 'N';
		for(int i=0; i< tv.size();i++)
		{
			if(tm == tv[i].teamName)
			{
				cout<<"Team Name:"<<tv[i].teamName<<endl;  
				cout<<"Team City:"<<tv[i].teamCity<<endl;
				//cout<<"Number of Players in Team"<<tv[i].numPlayersinTeam<<endl;
				teamFound = 'Y';	
			}
					
		}
		
		if(teamFound == 'N')
			{
				cout<<"Team not found."<<endl;
			}
}

/*
void Team::updatePlayerCount(vector<Team> tv, string tm)
{
	vector<Team>::iterator it;
	cout<<tm<<"inside vector";
	
	for(it = tv.begin(); it!=tv.end();it++ )
	{
			if(it->teamName==tm)
			{
				     cout<<it->teamName;
					 
					cout<<it->numPlayersinTeam++;
			} 
	}
	
}*/