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

// int Player::getWins() const{
// 	return wins;
// }

// int Player::getLosses() const{
// 	return losses;
// }

// // Setters
// void Player::addWin(){
// 	wins++;
// }

// void Player::addLoss(){
// 	losses++;
// }

// // Methods
// double Player::calcWinPercent(){
// 	return wins/(wins+losses);
// }

// double Player::calcLossPercent(){
// 	return losses/(wins+losses);
// }

#endif