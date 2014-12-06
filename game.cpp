#include "game.h"

int game::run()
{
	inf1.play(cd);
	while(true)
	{
		inf1.draw();
		
		int k = choose(4);

		if(k == 1)
		{
			system("cls");
			string str;
			string pass;
			cout << "请输入用户名：  ";
			cin >> str ;
			cout << "请输入密码：  ";
			cin	>> pass;
			if( check_ID(str,pass) )
			{
				name = str;
				break;
				
			}
			else
			{
				inf3.play(cd);
				inf3.draw();
			}
		}
		else if( k == 4)
		{
			inf3.draw_help();
		}

		else if( k == 2)
		{
			create_ID();
			system("cls");
			cout << "\n创建成功!\n" << endl;
			cout << "按任意键返回登录页面"<< endl;
			getchar();
			getchar();
		}

		else if( k == 3)
		{
			inf2.draw();
			inf2.play(cd);
			return 0;
		}
	}
	user us(name);
	cd(string("passing.wav"));
	while(true)
	{
	//	fstream in(name.c_str());
	
		inf4.draw();
	
		int k = choose(7);

		switch(k)
		{
		case 1:
			cd(string("passing.wav"));
			us.study1();
			break;
		case 2:
			cd(string("passing.wav"));
			us.study2();
			break;
		case 3:
			cd(string("passing.wav"));
			us.study3();
			break;
		case 5:
			cd(string("passing.wav"));
			us.check_listen();
			break;
		case 4:
			cd(string("passing.wav"));
			us.check_translation();
			break;
		case 6:
			cd(string("passing.wav"));
			us.find_word();
			break;
		case 7:

			inf2.draw();
			inf2.play(cd);
			return 0;
		}
		
	}

	
}

int game::choose(int n)
{
	while(true)
	{
		int ch;
		cin >> ch;
		if(ch>0 && ch <= n)
			return ch;
		else
		{
			cd(string("wrong.wav"));
			cout << "无该选项，请重新输入" << endl;
		}
	}
}

bool game::check_ID(const string& tname,const string & pass )
{
		string pa;
		fstream in(tname.c_str());
		in >> pa;
		if(pa == pass)
			return true;
		else
			return false;
}

void game::create_ID()
{
		//清屏
	while(true)
	{
			system("cls");
			string sname;
			string spassword1;
			string spassword2;
			cout << "请输入用户名：  ";
			cin >> sname;
			cout << "请输入密码：  ";
			cin >> spassword1;	
			cout << "请重新输入密码：  ";
			cin >> spassword2;
			if(spassword1 == spassword2)
			{
				ofstream out(sname.c_str());
				out << spassword1 << endl;
				return;
			}
			else
			{
				getchar();
				inf3.play(cd);
				cout << "创建失败\n\n\n按回车键重新创建" << endl;
				getchar();
			}

	}

}