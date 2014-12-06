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
	


	//����ʱ����������Ϣ
	~user();

	

	//���ҵ��ʣ���֧���ʶ�
	void find_word();

	//���䵥�ʣ���֧�ֵ�ǰ���ʵ��ʶ���
	void study1();
	void study3();
	void study2();
	
	//��ϰ���ʣ���֧�ֵ�ǰ���ʵ��ʶ���
	void review_old();
	void review_wrong();

	//��д��ϰ����ÿ��һ��һ����
	void check_listen();

	//������ϰ��
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