#ifndef __player_c_
#define __player_c_

#include <iostream>
#include <iomanip>
#include "player.h"

// Constructors
Player::Player(){
	wholeName="";
	position="";
	num= 0;
	wins= 0;
	gamesPlayed= 0;
	//winsOverGamesPlayed= 0.0;
}

Player::Player(std::string name, std::string pos, int number){
	wholeName= name;
	position= pos;
	num= number;
	wins= 0;
	gamesPlayed= 0;
	//winsOverGamesPlayed= 0.0;
}

// Getters
std::string Player::getName() const{
	return wholeName;
}

std::string Player::getPosition() const{
	return position;
}

int Player::getNumber() const{
	return num;
}
	
// Getters
int Player::getWins(){
	return wins;
}

int Player::numGamesPlayed(){
	return gamesPlayed;
}

// int Player::getWOGP(){
// 	return winsOverGamesPlayed;
// }


// Setters
void Player::addWin(){
	wins= wins +1;
}

void Player::addGamePlayed(){
	gamesPlayed= gamesPlayed+1;
}

// void Player::calcWOGP(){
// 	winsOverGamesPlayed= (float)wins/(float)gamesPlayed;
// }

#endif