#ifndef GAME_INTERFACE_H
#define GAME_INTERFACE_H
#include <iostream>
#include "interface.h"
#include "my_play.h"
using namespace std;

class game_interface : public myinterface{
public:
	game_interface(const string&);
	void draw();
	void play(my_play&);
private:
	string game_path;
};


#endif