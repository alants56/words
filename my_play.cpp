#include "my_play.h"

bool my_play::operator()(const string& str)
{
	string cmd = string("play ") + str;
	mciSendString(cmd.c_str(),"",0,NULL);
	return true;
}