#ifndef WRONG_INTERFACE_H
#define WRONG_INTERFACE_H
#include <iostream>
#include "interface.h"
#include "my_play.h"
using namespace std;
class wrong_interface : public myinterface{
public:
	wrong_interface(const string&);
	void draw();
	void draw_help();
	void play(my_play&);
private:
	string wrong_path;
};


#endif