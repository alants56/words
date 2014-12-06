#ifndef INTERFACE_H
#define INTERFACE_H
#include "my_play.h"
class myinterface{
public:
	virtual void draw() = 0;
	virtual void play(my_play&) = 0;
	virtual ~myinterface(){}
};
#endif