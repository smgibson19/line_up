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
double winPercValues[12];
//std::vector<std::vector<bool> > history; // this vector will keep track of all the games/ who played/ win or lose

void recordWins(std::vector<bool> foo){
	for(int r=0; r<roster.size()-1; r++){
		if(foo[r]){ // checks if they played
			roster[r].addGamePlayed();
			if(foo[foo.size()-1]){ //checks if the team won that game
				roster[r].addWins();
			}
		}
	}
}

// calculates the percent of wins out of total games played
void winPercCalc(){
	for(int i=0; i<roster.size(); ++i){
		double answ= (double)roster[i].getWins()/roster[i].gamesPlayed();
		winPercValues[i]= answ;
	}
	
}


 
int main(){

	// creating the roster and adding players to roster
	// in later development this will be read in by a file
	Player player1("A", "OPP", 1);
	roster.push_back(player1);
	Player player2("B", "OUT", 2);
	roster.push_back(player2);
	Player player3("C", "MID", 3);
	roster.push_back(player3);
	Player player4("D", "OPP", 4);
	roster.push_back(player4);
	Player player5("E", "OUT", 5);
	roster.push_back(player5);
	Player player6("F", "MID", 6);
	roster.push_back(player6);
	Player player7("G", "OPP", 7);
	roster.push_back(player7);
	Player player8("H", "OUT", 8);
	roster.push_back(player8);
	Player player9("I", "MID", 9);
	roster.push_back(player9);
	Player player10("J", "OPP", 10);
	roster.push_back(player10);
	Player player11("K", "OUT", 11);
	roster.push_back(player11);
	Player player12("L", "MID", 12);
	roster.push_back(player12);



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


	// do you want a line up?



}
