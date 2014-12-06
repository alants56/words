#ifndef END_INTERFACE_H
#define END_INTERFACE_H
#include <iostream>
#include "interface.h"
#include "my_play.h"
using namespace std;

class end_interface : public myinterface{
public:
	end_interface(const string&path) : end_path(path){} 
	void draw();
	void play(my_play &);
private:
	string end_path;
};

#endif