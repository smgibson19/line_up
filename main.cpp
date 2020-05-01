//line up main

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <algorithm>
#include "player.h"

int main(){

	// creating the roster and adding players to roster
	// in later development this will be read in by a file
	std::vector<Player> roster;
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


	std::vector<std::vector<bool> history; // this vector will keep track of all the games/ who played/ win or lose

	// the vectors pushed into history will be in roster order with true or false
	// so if for history[2][4] = true that means the third game player 5th in the roster was playing that game
	// history[3][roster.size()] = false means they lost the game
	// imagine the vector to look like this : P1,P2,P3,P4,P5,P6,P7,P8,W/L

	std::vector<bool> game1;




}
