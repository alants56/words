#include "word.h"

word::word(const string& str1,const string& str2) : spe(str1),chn(str2){
	path = string(".\\data\\")+ str1 + string(".mp3");
}