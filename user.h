#ifndef USER_H
#define USER_H
#include "word.h"
#include "my_rand.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class user{
public:

	user(const string&);
	


	//结束时保存所有信息
	~user();

	

	//查找单词，并支持朗读
	void find_word();

	//记忆单词，（支持当前单词的朗读）
	void study1();
	void study3();
	void study2();
	
	//复习单词，（支持当前单词的朗读）
	void review_old();
	void review_wrong();

	//听写练习，（每个一秒一个）
	void check_listen();

	//翻译练习，
	void check_translation();
	int choose(int n);
	
private:
	string name;
	string passward;
	string path_raw_data;
	my_play cd;
	my_rand rand;
	vector<word> all;
	vector<word> wrong;
	vector<word> raw;
	vector<word> old;
	
};
#endif