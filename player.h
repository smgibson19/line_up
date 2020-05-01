#ifndef __player_h_
#define __player_h_

class Player{

public:
	Player();
	Player(std::string name, std::string pos, int number);

	// Getters
	std::string getName() const; 
	std::string getPosition() const; 
	int getNumber() const;
	int getWins();
	int gamesPlayed();
	
	// Setters
	void addWin();
	void addGamePlayed();

// private variables
private:
	std::string wholeName, position;
	int num, wins, gamesPlayed;
};

#endif