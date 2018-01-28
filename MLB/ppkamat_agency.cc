
#include<iostream>
#include<vector>
#include"ppkamat_agency.h"

using namespace std;


int main(void)
{
	char again; 
	string option, choice, teamName, teamCity, playerName;
	int playerId, playerPhoneNumber, tmFound;
	
	
	again = 'y';

	do
	{
	cout <<"*******************"<<endl;
	cout << "MLB Sports Agency"<<endl;
	cout <<"1. Insert Team/Player"<<endl;
	cout <<"2. Display Details of players/team"<<endl;
	cout <<"3. Sort players"<<endl;
	cout <<"4. Search players "<<endl;
	cout <<"5. Test function"<<endl;
	cout <<"*******************"<<endl;
		
		cout <<endl<<"Enter your option : ";
		enter : cin>>option;	

		switch(option.at(0))
		{
			case '1':   {
				
						
							cout<<"You wish to insert a :"<<endl;
							cout<<"1. A new Team"<<endl;
							cout<<"2. A new Player"<<endl;
					   
							cout <<endl<<"Enter your option : ";
							insert_choice : cin>>choice;
							
							switch(choice.at(0))
							{
								case '1' : // Enter Team details
								{			
											cout<<"Enter a Team Name:"<<endl;	
											cin>>teamName;
											
											cout<<"Enter a City Name:"<<endl;
											cin>>teamCity;
								
										    team.addNewTeam(teamName, teamCity);
										    tmVector.push_back(team);
								}
								break;
									
								case '2' : player.insertNewPlayer();
								           plVector.push_back(player);
										   break;

								default  : "Incorrect option. Enter valid Option:";
											goto insert_choice;
							}	
						
					 }
					   break;
					   
			case '2':{
					  cout<<"You wish to display"<<endl;
					  cout<<"1. Details of specific team."<<endl;
					  cout<<"2. Details of specific player."<<endl;
					  
					  cout <<endl<<"Enter your option : ";
							disp_choice : cin>>choice;
							
							switch(choice.at(0))
							{
								case '1' : cout<<"Enter name of the team:"<<endl;
										   cin>> teamName;
										   team.displayTeamInfo(tmVector, teamName);
										   break;
									
								case '2' : 
								
										   cout<<"Enter name of the player:"<<endl;
										   cin>> playerName;
										   player.displayPlayerInfoByTeam(plVector,playerName);
										   break;

								default  : "Incorrect option. Enter valid Option:";
											goto disp_choice;
							}	
					 }
					  break;

			case '3':{
				
					  cout<<"Do you wish to sort all players(P) or players from a particular team(T) ??" <<endl;
					  char st_option;
					  sort_option: cin>> st_option;
					
					  cout<<"You wish to sort players by:"<<endl;
					  cout<<"1. Name"<<endl;
					  cout<<"2. ID"<<endl;
					  cout<<"3. Salary"<<endl;
					  
					  cout<<endl<<"Enter your option:";
					  sort_choice : cin>>choice;
						

					 if(st_option == 'P' || st_option == 'p')	
					 {  
						switch(choice.at(0))
						{
							case '1': cout<<"Sorting Players by Name:"<<endl;
									  player.sortPlayerByName(plVector);
									  break;
							
							case '2': cout<<"Sorting Players by ID:"<<endl;
									  player.sortPlayerById(plVector);
									  break;
							
							case '3': cout<<"Sorting Players by Salary:"<<endl;
									  cin>> playerPhoneNumber;
									  player.sortPlayerBySalary(plVector);
									  break;
							
							default:"Incorrect option. Enter valid Option:";
											goto sort_choice;
						}
					 }
					 else if(st_option == 'T' || st_option == 't')
					 {
						cout<<"Enter name of the team in which you need the players to be sorted:";
						cin>> teamName;
						
						switch(choice.at(0))
						{
							case '1': cout<<"Sorting Players in "<<teamName<<" by Name:"<<endl;
									  player.sortPlayerInTeamByName(plVector, teamName);
									  break;
							
							case '2': cout<<"Sorting Players in "<<teamName<<" by ID:"<<endl;
									  player.sortPlayerInTeamById(plVector, teamName);
									  break;
							
							case '3': cout<<"Sorting Players in "<<teamName<<" by Salary:"<<endl;
									  cin>> playerPhoneNumber;
									  player.sortPlayerInTeamBySalary(plVector, teamName);
									  break;
							
							default:"Incorrect option. Enter valid Option:";
											goto sort_choice;
						} 
					 }
					 
					 else
					 {
							cout<<"Enter valid Sort choice(P/T)"<<endl;
							goto sort_option;
					 }
					}
					  break;
					  
			case '4':{
					    cout<<"You wish to search players by:"<<endl;
					    cout<<"1. Name"<<endl;
					    cout<<"2. ID"<<endl;
					    cout<<"3. Phone"<<endl;
						
						cout<<endl<<"Enter your option:";
						search_choice : cin>>choice;
						
						switch(choice.at(0))
						{
							case '1': cout<<"Enter name of the player:"<<endl;
									  cin>> playerName;
									  player.searchPlayerByName(plVector,playerName);
									  break;
							
							case '2': cout<<"Enter ID of the player:"<<endl;
									  cin>> playerId;
									  player.searchPlayerById(plVector,playerId);
									  break;
							
							case '3': cout<<"Enter Phone Number of the player:"<<endl;
									  cin>> playerPhoneNumber;
									  player.searchPlayerByPhoneNumber(plVector,playerPhoneNumber);
									  break;
							
							default:"Incorrect option. Enter valid Option:";
											goto search_choice;
						}
					 }
					 break;
					 
			case '5': {
							cout<<"Performing Test Cases:"<<endl<<endl;
							
							/*
							cout<<"****Adding teams****"<<endl;
							t1.addNewTeam("Madrid","Madrid");
							t2.addNewTeam("Chelsea","London");
							t3.addNewTeam("PSG","Paris");
							*/
							
							Team t1("Madrid","Madrid");
							Team t2("Chelsea","London");
							Team t3("PSG","Paris");
							
							tmVector.push_back(t1);
							tmVector.push_back(t2);
							tmVector.push_back(t3);
							
							/*
							cout<<"****Adding new Players*****"<<endl;
							p1.insertNewPlayer("Ronaldo","Madrid",7,12345,"FWD","Portugal", 80000);
							p2.insertNewPlayer("Ramos","Madrid",5,23456,"DEF","Spain",50000);
							p3.insertNewPlayer("Hazard","Chelsea",10,34567,"LM","Belgium",60000);
							p4.insertNewPlayer("Neymar","PSG",11,45678,"LWM","Brazil",70000);
							*/
							
							Player p1("Ronaldo","Madrid",7,12345,"FWD","Portugal", 80000);
							Player p2("Ramos","Madrid",5,23456,"DEF","Spain",50000);
							Player p3("Hazard","Chelsea",10,34567,"LM","Belgium",60000);
							Player p4("Neymar","PSG",11,45678,"LWM","Brazil",70000);
							
							plVector.push_back(p1);
							plVector.push_back(p2);
							plVector.push_back(p3);
							plVector.push_back(p4);
							
							// Sort Functions
							
							cout<<"****Sort Players using Name****"<<endl;
							pmTest.sortPlayerByName(plVector);
							cout<<"****Sort Players using Id****"<<endl;
							pmTest.sortPlayerById(plVector);
							cout<<"****Sort Players using Salary****"<<endl;
							pmTest.sortPlayerBySalary(plVector);
							
							cout<<"****Sort Players in Team Madrid using Name****"<<endl;
							pmTest.sortPlayerInTeamByName(plVector, "Madrid");
							cout<<"****Sort Players in Team Madrid using Id****"<<endl;
							pmTest.sortPlayerInTeamById(plVector, "Madrid");
							cout<<"****Sort Players in Team Madrid using Salary****"<<endl;
							pmTest.sortPlayerInTeamBySalary(plVector, "Madrid");
							
							// Search Functions
							
							cout<<"****Search player by Name****"<<endl;
							pmTest.searchPlayerByName(plVector,"Ronaldo");
							cout<<"****Search player by ID****"<<endl;
							pmTest.searchPlayerById(plVector, 10);
							cout<<"****Search player by Phone Number****"<<endl;
							pmTest.searchPlayerByPhoneNumber(plVector, 45678);							
							
					  }
					  break;
			
			default :  cout << "Wrong Choice.Enter valid option:"<<endl; 
					   goto enter;
					   
					    
		}
		 
		cout <<"Do you want to continue using the application (y/n)";
		cin >> again;
		if(again == 'n' || again == 'N')
		{
			cout << "Thank you for using the application"<<endl;
			break;
		}
 	}
	while(again=='y');
	return 0;
}
