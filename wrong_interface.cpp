#include "wrong_interface.h"

wrong_interface::wrong_interface(const string&temp) : wrong_path(temp){}

void wrong_interface::draw()
{	
	system("cls");
	cout << "���û�������..." << endl;
	cout << "�����˻�����ʹ��ϵͳ�ṩ�ġ�"<< endl;
	cout << "�û�����123 " << endl;
	cout << "���룺123" << endl;
	cout << "��������ص����˵�" << endl;
	getchar();
	getchar();
}

void wrong_interface::draw_help()
{
	system("cls");
	cout << "************************************************" << endl;
	cout << "*               ��        ��                   *" << endl;
	cout << "************************************************" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*      1.��ϵͳĬ�ϴ���һ���û����û���        *" << endl;
	cout << "*      �����붼Ϊ123                           *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*      2.�����û������Լ����û���������,       *" << endl;
	cout << "*      ����ϵͳ�ᱣ����ļ���״̬������        *" << endl;
	cout << "*      �´μ���                                *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*      3.ÿ������ѡ����밴�س���ϵͳ        *" << endl;
	cout << "*      �Ż��ȡ�������                        *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "************************************************" << endl;

	cout << "��������ص����˵�" << endl;
	getchar();
	getchar();
}

void wrong_interface::play(my_play & temp)
{
	temp(wrong_path);
}
