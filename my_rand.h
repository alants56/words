#ifndef MY_RAND_H
#define MY_RAND_H

#include <ctime>
#include <cstdlib>

struct my_rand{
	my_rand(){srand(time(0));}
	int operator()(int b,int e);
};

#endif