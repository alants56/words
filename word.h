#ifndef WORD_H
#define WORD_H

#include <ostream>
#include "my_play.h"
class word{
public:

	word(const string& str1,const string& str2);
	
	void play( my_play&temp){ temp(path); } // ≤•∑≈∂¡“Ù

	string return_spe(){return spe;}
	string return_chn(){return chn;}

	bool check_spe(const string&str){ return spe == str;}
	bool check_chn(const string&str){ return chn == str;}
	void output( std::ostream&os){os << spe << "  " << chn << std::endl;}
	bool operator < (const word&temp){return spe < temp.spe;}
	bool operator == (const word&temp){return spe == temp.spe;}
	bool operator != (const word&temp){return spe != temp.spe;}
	
private:
	string spe; // ”¢”Ôµ•¥ 
	string chn;	// ∑≠“Î
	string path; //“Ù∆µ¬∑æ∂
};
#endif