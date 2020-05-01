#ifndef __player_c_
#define __player_c_

#include <iostream>
#include <iomanip>
#include "player.h"

// Constructors
Player::Player(){
	wholeName="";
	position="";
	num=0;
	wins=0;
	losses=0;
}

Player::Player(std::string name, std::string pos, int number){
	wholeName= name;
	position= pos;
	num= number;
	wins=0;
	losses=0;
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

int Player::gamesPlayed(){
	return gamesPlayed;
}

// Setters
void Player::addWin(){
	wins++;
}

void Player::addGamePlayed(){
	gamesPlayed++;
}

#endif