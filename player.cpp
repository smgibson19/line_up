#ifndef __player_c_
#define __player_c_

#include <iostream>
#include <iomanip>
#include <cmath>
#include "football_game.h"
#include "football_team.h"

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
std::string Player::getName(){
	return wholeName;
}

std::string Player::getPosition(){
	return position;
}

int Player::getNumber(){
	return num;
}

// int Player::getWins(){
// 	return wins;
// }

// int Player::getLosses(){
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