#ifndef MY_PLAY_H
#define MY_PLAY_H

#include <string>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib, "WINMM.LIB")
using namespace std;

struct my_play{
	bool operator()(const string&);
};

#endif