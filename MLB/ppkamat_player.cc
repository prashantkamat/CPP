#include<iostream>
#include "ppkamat_player.h"
#include "ppkamat_team.h"

using namespace std;

Player::Player(){}

Player::Player( string nm, string tm, int id, int phone, string pos, string add, int sal)
{
	playerName = nm; 
	playerTeam = tm;
	playerPosition = pos; 
	playerAddress = add;
	playerId = id; 
	playerCellNo = phone;
	playerSalary = sal;	
}	



string Player::insertNewPlayer()
{
	string nm, tm, pos, add;
	int id, phone, sal;
	
	cout<< "Enter player name:"<<endl;
	cin>>nm;
	this->playerName = nm;
	
	cout<< "Enter player team:"<<endl;
	cin>>tm;
	this->playerTeam = tm;
	
	cout<< "Enter player Id:"<<endl;
	enterID : cin>>id;
	this->playerId = id;
	
	/*validate id
	id_exists = checkPlayerId(id);
	if(id_exists == 0)
		{
			goto enterID;
		}
	else
		{
			this->playerId = id;
		}
	*/
	
	cout<< "Enter player phone :"<<endl;
	cin>>phone;
	this->playerCellNo = phone;
	
	cout<< "Enter player position:"<<endl;
	cin>>pos;
	this->playerPosition = pos;
	
	cout<< "Enter player address:"<<endl;
	cin>>add;
	this->playerAddress = add;
	
	cout<< "Enter player sal:"<<endl;
	cin>>sal;
	this->playerSalary = sal;

	cout<<"Player inserted succesfully."<<endl;
	
	//Update Player Count
	return this->playerTeam;
}	

/* Check Player ID
int Player::checkPlayerId(int enter_id)
{
	
	for(int i=0;i<plvector.size(); i++)
	{
		if(plvector[i].playerId == enter_id)
		{
			cout<<"Player Id already exists. Re-enter ID"<<endl;
			return 0;
		}
		else
		{
			return 1;
		}
	}
	
}*/

// Sort Functions

void Player::sortPlayerByName(vector<Player> pv)
{
	Player temp;

	for(int i=0; i<pv.size()-1;i++)
	{
		if(pv[i].playerName > pv[i+1].playerName)
		{
			temp =pv[i];
			pv[i]=pv[i+1];
			pv[i+1]=temp;
		}
	}	

	for(int i=0; i< pv.size();i++)
	{
		
				cout<<"Player Name:"<<pv[i].playerName<<endl; 
				cout<<"Player Team:"<<pv[i].playerTeam<<endl; 
				cout<<"Player Position:"<<pv[i].playerPosition<<endl;  
				cout<<"Player Address:"<<pv[i].playerAddress<<endl; 
				cout<<"Player Id:"<<pv[i].playerId<<endl; 
				cout<<"Player Phone:"<<pv[i].playerCellNo<<endl; 
				cout<<"Player Salary:"<<pv[i].playerSalary<<endl; 
		
	}	
}
	
void Player::sortPlayerById(vector<Player> pv)
{
	Player temp;

	for(int i=0; i<pv.size()-1;i++)
	{
		if(pv[i].playerId > pv[i+1].playerId)
		{
			temp =pv[i];
			pv[i]=pv[i+1];
			pv[i+1]=temp;
		}
	}	

	for(int i=0; i< pv.size();i++)
	{
		
				cout<<"Player Name:"<<pv[i].playerName<<endl; 
				cout<<"Player Team:"<<pv[i].playerTeam<<endl; 
				cout<<"Player Position:"<<pv[i].playerPosition<<endl;  
				cout<<"Player Address:"<<pv[i].playerAddress<<endl; 
				cout<<"Player Id:"<<pv[i].playerId<<endl; 
				cout<<"Player Phone:"<<pv[i].playerCellNo<<endl; 
				cout<<"Player Salary:"<<pv[i].playerSalary<<endl; 
		
	}	
}

void Player::sortPlayerBySalary(vector<Player> pv)
{
	Player temp;

	for(int i=0; i<pv.size()-1;i++)
	{
		if(pv[i].playerSalary < pv[i+1].playerSalary)
		{
			temp =pv[i];
			pv[i]=pv[i+1];
			pv[i+1]=temp;
		}
	}	

	for(int i=0; i< pv.size()-1;i++)
	{
		
				cout<<"Player Name:"<<pv[i].playerName<<endl; 
				cout<<"Player Team:"<<pv[i].playerTeam<<endl; 
				cout<<"Player Position:"<<pv[i].playerPosition<<endl;  
				cout<<"Player Address:"<<pv[i].playerAddress<<endl; 
				cout<<"Player Id:"<<pv[i].playerId<<endl; 
				cout<<"Player Phone:"<<pv[i].playerCellNo<<endl; 
				cout<<"Player Salary:"<<pv[i].playerSalary<<endl; 
		
	}	
}


void Player::sortPlayerInTeamByName(vector<Player> pv,string tm)
{
	Player temp;

	for(int i=0; i<pv.size()-1;i++)
	{
		if(pv[i].playerName > pv[i+1].playerName)
		{
			temp =pv[i];
			pv[i]=pv[i+1];
			pv[i+1]=temp;
		}
	}	
	
	for(int i=0; i< pv.size();i++)
	{
		if(tm == pv[i].playerTeam)
		{
				cout<<"Player Name:"<<pv[i].playerName<<endl; 
				cout<<"Player Team:"<<pv[i].playerTeam<<endl; 
				cout<<"Player Position:"<<pv[i].playerPosition<<endl;  
				cout<<"Player Address:"<<pv[i].playerAddress<<endl; 
				cout<<"Player Id:"<<pv[i].playerId<<endl; 
				cout<<"Player Phone:"<<pv[i].playerCellNo<<endl; 
				cout<<"Player Salary:"<<pv[i].playerSalary<<endl; 
		}
	}
	
}
void Player::sortPlayerInTeamById(vector<Player> pv,string tm)
{
	Player temp;

	for(int i=0; i<pv.size()-1;i++)
	{
		if(pv[i].playerId > pv[i+1].playerId)
		{
			temp =pv[i];
			pv[i]=pv[i+1];
			pv[i+1]=temp;
		}
	}	

	for(int i=0; i< pv.size();i++)
	{
		if(tm == pv[i].playerTeam)
		{
				cout<<"Player Name:"<<pv[i].playerName<<endl; 
				cout<<"Player Team:"<<pv[i].playerTeam<<endl; 
				cout<<"Player Position:"<<pv[i].playerPosition<<endl;  
				cout<<"Player Address:"<<pv[i].playerAddress<<endl; 
				cout<<"Player Id:"<<pv[i].playerId<<endl; 
				cout<<"Player Phone:"<<pv[i].playerCellNo<<endl; 
				cout<<"Player Salary:"<<pv[i].playerSalary<<endl; 
		}
	}		
}
void Player::sortPlayerInTeamBySalary(vector<Player> pv,string tm)
{
	Player temp;

	for(int i=0; i<pv.size()-1;i++)
	{
		if(pv[i].playerSalary < pv[i+1].playerSalary)
		{
			temp =pv[i];
			pv[i]=pv[i+1];
			pv[i+1]=temp;
		}
	}	

	for(int i=0; i< pv.size();i++)
	{
		if(tm == pv[i].playerTeam)
		{
				cout<<"Player Name:"<<pv[i].playerName<<endl; 
				cout<<"Player Team:"<<pv[i].playerTeam<<endl; 
				cout<<"Player Position:"<<pv[i].playerPosition<<endl;  
				cout<<"Player Address:"<<pv[i].playerAddress<<endl; 
				cout<<"Player Id:"<<pv[i].playerId<<endl; 
				cout<<"Player Phone:"<<pv[i].playerCellNo<<endl; 
				cout<<"Player Salary:"<<pv[i].playerSalary<<endl; 
		}
	}
}



// Display player info taking team as parameter.
void Player::displayPlayerInfoByTeam(vector<Player> pv, string tm)
{	
	for(int i=0; i< pv.size();i++)
	{
		if(tm == pv[i].playerTeam)
		{
				cout<<"Player Name:"<<pv[i].playerName<<endl; 
				cout<<"Player Team:"<<pv[i].playerTeam<<endl; 
				cout<<"Player Position:"<<pv[i].playerPosition<<endl;  
				cout<<"Player Address:"<<pv[i].playerAddress<<endl; 
				cout<<"Player Id:"<<pv[i].playerId<<endl; 
				cout<<"Player Phone:"<<pv[i].playerCellNo<<endl; 
				cout<<"Player Salary:"<<pv[i].playerSalary<<endl; 
		}
	}
}	

// Display all players
void Player::displayAllPlayers(vector<Player> pv)
{	
	for(int i=0; i< pv.size();i++)
	{
		
				cout<<"Player Name:"<<pv[i].playerName<<endl; 
				cout<<"Player Team:"<<pv[i].playerTeam<<endl; 
				cout<<"Player Position:"<<pv[i].playerPosition<<endl;  
				cout<<"Player Address:"<<pv[i].playerAddress<<endl; 
				cout<<"Player Id:"<<pv[i].playerId<<endl; 
				cout<<"Player Phone:"<<pv[i].playerCellNo<<endl; 
				cout<<"Player Salary:"<<pv[i].playerSalary<<endl; 
		
	}
}	

// Search functions

void Player::searchPlayerByName(vector<Player> pv, string nm)
{
		playerFound = 'N';
		for(int i=0; i< pv.size();i++)
		{
			if(nm == pv[i].playerName)
			{
				cout<<"Player Name:"<<pv[i].playerName<<endl; 
				cout<<"Player Team:"<<pv[i].playerTeam<<endl; 
				cout<<"Player Position:"<<pv[i].playerPosition<<endl;  
				cout<<"Player Address:"<<pv[i].playerAddress<<endl; 
				cout<<"Player Id:"<<pv[i].playerId<<endl; 
				cout<<"Player Phone:"<<pv[i].playerCellNo<<endl; 
				cout<<"Player Salary:"<<pv[i].playerSalary<<endl; 
				playerFound = 'Y';
					
			}
			
		}
		
		if(playerFound == 'N')
			{
				cout<<"Player not found."<<endl;
			}
}

void Player::searchPlayerById(vector<Player> pv, int plId)
{
		playerFound = 'N';
		for(int i=0; i< pv.size();i++)
		{
			if(plId == pv[i].playerId)
			{
				cout<<"Player Name:"<<pv[i].playerName<<endl; 
				cout<<"Player Team:"<<pv[i].playerTeam<<endl; 
				cout<<"Player Position:"<<pv[i].playerPosition<<endl;  
				cout<<"Player Address:"<<pv[i].playerAddress<<endl; 
				cout<<"Player Id:"<<pv[i].playerId<<endl; 
				cout<<"Player Phone:"<<pv[i].playerCellNo<<endl; 
				cout<<"Player Salary:"<<pv[i].playerSalary<<endl; 
				playerFound = 'Y';	
			}	
		}
		
		if(playerFound == 'N')
			{
				cout<<"Player not found."<<endl;
			}

}

void Player::searchPlayerByPhoneNumber(vector<Player> pv, int phone)
{
		playerFound = 'N';
		for(int i=0; i< pv.size();i++)
		{
			if(phone == pv[i].playerCellNo)
			{
				cout<<"Player Name:"<<pv[i].playerName<<endl; 
				cout<<"Player Team:"<<pv[i].playerTeam<<endl; 
				cout<<"Player Position:"<<pv[i].playerPosition<<endl;  
				cout<<"Player Address:"<<pv[i].playerAddress<<endl; 
				cout<<"Player Id:"<<pv[i].playerId<<endl; 
				cout<<"Player Phone:"<<pv[i].playerCellNo<<endl; 
				cout<<"Player Salary:"<<pv[i].playerSalary<<endl; 
				playerFound ='Y';
					
			}
		}
		
		if(playerFound == 'N')
			{
				cout<<"Player not found."<<endl;
			}

}
