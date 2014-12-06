#include "my_rand.h"


int my_rand::operator()(int b, int e)
{
	int i = (rand() % (b-e)) + b;
	return i;
}