//line up main

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <algorithm>
#include "player.h"

// Global variables
std::vector<Player> roster;

std::vector<Player> Opps;
std::vector<Player> Outs;
std::vector<Player> Mids;

// double winPercValues[12];
std::string lineUp[6];
//std::vector<std::vector<bool> > history; // this vector will keep track of all the games/ who played/ win or lose

void recordWins(std::vector<bool> foo){
	for(int r=0; r<roster.size()-1; r++){
		if(foo[r]){ // checks if they played
			roster[r].addGamePlayed();
			if(foo[foo.size()-1]){ //checks if the team won that game
				roster[r].addWin();
			}
		}
		roster[r].calcWOGP();
	}
}

// // calculates the percent of wins out of total games played
// void winPercCalc(){
// 	for(int i=0; i<roster.size(); ++i){
// 		double answ= (double)roster[i].getWins()/roster[i].numGamesPlayed();
// 		winPercValues[i]= answ;
// 	}
	
// }
 
int main(){

	// creating the roster and adding players to roster
	// in later development this will be read in by a file
	Player player1("A", "OPP", 1);
	roster.push_back(player1);
	Opps.push_back(player1);

	Player player2("B", "OUT", 2);
	roster.push_back(player2);
	Outs.push_back(player2);

	Player player3("C", "MID", 3);
	roster.push_back(player3);
	Mids.push_back(player3);

	Player player4("D", "OPP", 4);
	roster.push_back(player4);
	Opps.push_back(player4);

	Player player5("E", "OUT", 5);
	roster.push_back(player5);
	Outs.push_back(player5);

	Player player6("F", "MID", 6);
	roster.push_back(player6);
	Mids.push_back(player6);

	Player player7("G", "OPP", 7);
	roster.push_back(player7);
	Opps.push_back(player7);

	Player player8("H", "OUT", 8);
	roster.push_back(player8);
	Outs.push_back(player8);

	Player player9("I", "MID", 9);
	roster.push_back(player9);
	Mids.push_back(player9);

	Player player10("J", "OPP", 10);
	roster.push_back(player10);
	Opps.push_back(player10);

	Player player11("K", "OUT", 11);
	roster.push_back(player11);
	Outs.push_back(player11);

	Player player12("L", "MID", 12);
	roster.push_back(player12);
	Mids.push_back(player12);


	// the vectors pushed into history will be in roster order with true or false
	// so if for history[2][4] = true that means the third game player 5th in the roster was playing that game
	// history[3][roster.size()] = false means they lost the game
	// imagine the vector to look like this : P1,P2,P3,P4,P5,P6,P7,P8,W/L

	// these are games that have already happened
	std::vector<bool> game1{true,false,false,false,true,false,true,false,true,false,true,true,false};
	recordWins(game1);

	std::vector<bool> game2{false,true,true,false,true,false,true,false,false,true,false,true,true};
	recordWins(game2);

	std::vector<bool> game3{false,false,true,true,false,false,true,true,true,false,true,false,true};
	recordWins(game3);

	std::vector<bool> game4{false,true,false,true,true,true,true,false,true,false,false,false,true};
	recordWins(game4);

	std::vector<bool> game5{true,true,false,true,true,true,false,false,false,false,false,true,false};
	recordWins(game5);

	std::vector<bool> game6{false,false,false,false,false,false,true,true,true,true,true,true,false};
	recordWins(game6);

	std::vector<bool> game7{false,true,true,true,false,true,false,true,false,true,false,false,true}; 
	recordWins(game7);

	std::vector<bool> game8{true,false,false,false,false,true,false,true,true,true,true,false,false};
	recordWins(game8);

	// history.push_back(game1);
	// history.push_back(game2);
	// history.push_back(game3);
	// history.push_back(game4);
	// history.push_back(game5);
	// history.push_back(game6);
	// history.push_back(game7);
	// history.push_back(game8);

	bool doTheyWantaLineUp= true;
	int userAnsw;

	// loop to create lineups for user!
	while (doTheyWantaLineUp){
		std::cout<< "Would you like to generate a line up? Type 0 for yes and 1 for no\n";
		std::cin>> userAnsw ;

		if(userAnsw== 1){
			doTheyWantaLineUp= false;
			std::cout<< "Have a great day!\n" ;
			break;

		}

		std::vector<bool> newGame; // the game that is going to happen with the line up made, where the results are going to be saved

		// winPercCalc(); // calculates the win vs # of games played ratio for all players, the alg will use this data to decide who to pick

		//generate line up!

		// makes a copy roster for us to manipulate 
		std::vector<Player> copyRoster;
		for(int y=0; y< roster.size(); y++){
			copyRoster.push_back(roster[y]);
		}

		// finding the best players for each position
		for(int i=0; i<6; i++){
			int best= 0; // this will be the index of the best player 
			std::cout<< "here!\n" ;

			for(int j=0; j<copyRoster.size(); j++){
				if(i== 0 || i== 3){
					if(copyRoster[j].getPosition().compare("OPP")== 0){
						if(copyRoster[j].getWOGP()> copyRoster[best].getWOGP()){
							best = j;
						}
						if(copyRoster[j].getWOGP() == copyRoster[best].getWOGP()){
							if(copyRoster[j].numGamesPlayed() > copyRoster[best].numGamesPlayed()){
								best= j;
							}
						}
					}
				}
				else if(i== 1 || i== 4){
					if(copyRoster[j].getPosition().compare("OUT")== 0){
						if(copyRoster[j].getWOGP()> copyRoster[best].getWOGP()){
							best = j;
						}
					}
				}
				else{
					if(copyRoster[j].getPosition().compare("MID")== 0){
						if(copyRoster[j].getWOGP()> copyRoster[best].getWOGP()){
							best = j;
						}
					}
				}
			}
			lineUp[i]= copyRoster[best].getName();
			copyRoster.erase(copyRoster.begin()+best-1);
		}

		std::cout<< "here!\n" ;

		// prints out line up for user
		std::cout<< "Here is your line up!" << "\n";
		for(int a=0; a< 6; a++){
			std::cout<< "Position " << a << ": " << lineUp[a] << "\n";
		}

		// add line up to new game
		int count=0;
		for(int x=0; x<roster.size(); x++){
			if(roster[x].getName().compare(lineUp[count]) == 0){
				newGame.push_back(true);
				count++;
			}
			else{
				newGame.push_back(false);
			}
		}

		// asking win or loss
		std::cout<< "Did the line up result in a win or loss? Type 0 for win and 1 for loss" << "\n";
		std::cin>> userAnsw ;

		if(userAnsw== 0){
			newGame.push_back(true);
		}
		else{
			newGame.push_back(false);
		}

		// save game results player history
		recordWins(newGame);
	}



}
