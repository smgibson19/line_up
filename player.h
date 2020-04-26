#ifndef __player_h_
#define __player_h_

class Player{

public:
	Player();
	Player(std::string name, std::string position, int number, int wins, int losses);

	//Getters
	std::string getName() const; 
	std::string getPosition() const; 
	int getNumber() const;
	int getWins() const;
	int getLosses() const;
	
	//Setters
	void addWin();
	void addLoss();


	//Methods that serve other purposes
	void calcWinLossPercent();

	//private variables
private:
	std::string firstName, position;
	int num, wins, losses;
};

#endif