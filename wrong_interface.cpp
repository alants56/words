#include "wrong_interface.h"

wrong_interface::wrong_interface(const string&temp) : wrong_path(temp){}

void wrong_interface::draw()
{	
	system("cls");
	cout << "该用户不存在..." << endl;
	cout << "若无账户，可使用系统提供的。"<< endl;
	cout << "用户名：123 " << endl;
	cout << "密码：123" << endl;
	cout << "按任意键回到主菜单" << endl;
	getchar();
	getchar();
}

void wrong_interface::draw_help()
{
	system("cls");
	cout << "************************************************" << endl;
	cout << "*               帮        助                   *" << endl;
	cout << "************************************************" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*      1.该系统默认创建一个用户，用户名        *" << endl;
	cout << "*      和密码都为123                           *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*      2.建议用户创建自己的用户名和密码,       *" << endl;
	cout << "*      这样系统会保存你的记忆状态，便于        *" << endl;
	cout << "*      下次记忆                                *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*      3.每次输入选项后，请按回车，系统        *" << endl;
	cout << "*      才会读取你的输入                        *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;
	cout << "************************************************" << endl;

	cout << "按任意键回到主菜单" << endl;
	getchar();
	getchar();
}

void wrong_interface::play(my_play & temp)
{
	temp(wrong_path);
}
