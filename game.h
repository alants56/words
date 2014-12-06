#ifndef GAME_H
#define GAME_H

#include <fstream>
#include <iostream>
#include "my_play.h"
#include "strat_interface.h"
#include "user.h"
#include "word.h"
#include "wrong_interface.h"
#include "game_interface.h"
#include "end_interface.h"

using namespace std;

class game{
public:
	game() : inf1("start.mp3"),inf2("end.mp3"),inf3("wrong.wav"),inf4("game.mp3"){}
	int choose(int n);
	int input();
	bool check_ID(const string& name,const string & pass );
	void create_ID();
	int run();
private:
	string name;
	start_interface inf1;
	end_interface inf2;
	wrong_interface inf3;
	game_interface inf4;
	my_play cd;

};



#endif