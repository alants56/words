#ifndef START_INTERFACE_H
#define	START_INTERFACE_H
#include "interface.h"
#include "my_play.h"
#include <iostream>

class start_interface : public myinterface{
public:
	start_interface(const string &path);
	void draw();
	void play(my_play&);
	~start_interface(){}
private:
	string start_path;
};

#endif