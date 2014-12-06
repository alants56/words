#include"user.h"


user::user(const string& temp) : name(temp),path_raw_data(temp + string("_raw"))
{
	fstream in(temp.c_str());
	in >> passward;
	
	fstream indata(".\\data\\word.data");
	string chn;
	string name;
	while(	indata >> name&&indata>>chn )
	{
		all.push_back(word(name,chn));
	}

	fstream rawdata(path_raw_data.c_str());
	while(	rawdata>>name && rawdata>>chn )
	{
		raw.push_back(word(name,chn));
	}

	if(raw.size() == 0)
	{
		vector<word>::iterator iter = all.begin();
		while(iter != all.end())
		{
			raw.push_back(*iter++);
		}

	}
}

user::~user()
{
	ofstream output1(name.c_str());
	output1 << passward << endl;

	ofstream output(path_raw_data.c_str());
	vector<word>::iterator iter = raw.begin();
	while(iter != raw.end())
	{
				output << (*iter).return_spe() << endl;
				output << (*iter).return_chn() << endl;
				++iter;
	}
    iter = wrong.begin();
	while(iter != wrong.end())
	{
				output << (*iter).return_spe() << endl;
				output << (*iter).return_chn() << endl;
				++iter;
	}

}


int user::choose(int n)
{
	while(true)
	{
		int ch;
		cin >> ch;
		if(ch > 0 && ch <= n)
			return ch;
		else
		{
			cd(string("wrong.wav"));
			cout << "无该选项，请重新输入" << endl;
		}
	}
}


//void user::check_listen()
//{
//	system("cls");
//    cout<<"请输入你要听写单词的个数："<<endl;
//    int num;
//    cin>>num;
//    cout<<"准备好了吗？“y”开始"<<endl;
//    char choice;
//    cin>>choice;
//    while(choice!='y'){
//        cout<<"准备好了吗？“y”开始"<<endl;
//        cin>>choice;
//    }
//    my_rand rand;
//    int number;//产生随机数
//    my_play cd;
//    int rightnumber=0;//记录对的单词
//    int wrongnumber=0;//记录错误的单词
//    for(int i=0;i<num;++i){
//        number=rand(0,raw.size());
//        cout<<"第"<<i+1<<"个单词：";
//        raw[number].play(cd);
//        string speak;
//        cin>>speak;
//        bool d;//记录是对是错
//        d=raw[number].check_spe(speak);
//        if(d){
//            old.push_back(raw[number]);
//            raw.erase(raw.begin()+number);
//            ++rightnumber;
//        }
//        else{
//            wrong.push_back(raw[number]);
//            raw.erase(raw.begin()+number);
//            ++wrongnumber;
//        }
//    }
//    cout<<"对了："<<rightnumber<<"个单词"<<endl;
//    cout<<"错了："<<wrongnumber<<"个单词"<<endl;
//	getchar();
//}
//void user::check_translation()
//{
//	system("cls");
//    cout<<"请输入你默写单词中文意思的个数："<<endl;
//    int num;
//    cin>>num;
//    cout<<"准备好了吗？“y”开始"<<endl;
//    char choice;
//    cin>>choice;
//    while(choice!='y'){
//        cout<<"准备好了吗？“y”开始"<<endl;
//        cin>>choice;
//    }
//    my_rand rand;
//    int number;//产生随机数
//    int rightnumber=0;//记录对的单词
//    int wrongnumber=0;//记录错误的单词
//    for(int i=0;i<num;++i){
//        number=rand(0,raw.size());
//        cout<<"第"<<i+1<<"个单词：";
//        cout<<raw[number].return_spe();
//        string write;
//        bool d;//记录是对是错
//        d=raw[number].check_chn(write);
//        if(d){
//            old.push_back(raw[number]);
//            raw.erase(raw.begin()+number);
//            ++rightnumber;
//        }
//        else{
//            wrong.push_back(raw[number]);
//            raw.erase(raw.begin()+number);
//            ++wrongnumber;
//        }
//    }
//    cout<<"对了："<<rightnumber<<"个单词"<<endl;
//    cout<<"错了："<<wrongnumber<<"个单词"<<endl;
//	getchar();
//}
//
//
//void user::study1()
//{
//	system("cls");
//	char cmd;
//	struct my_rand rand;
//	string cur_word,cur_expl;
//	int count=0;
//	
//	cout<<"==============================================================================="<<endl;
//	cout<<"==============================================================================="<<endl;
//	cout<<"Press <1>:start    <2>:quit"<<endl;
//	if(getchar()==2) return;
//	while(1){
//		int cur_rand=rand(1,raw.size());
//		cur_word=raw[cur_rand].return_spe();
//		cur_expl=raw[cur_rand].return_chn();
//		cout<<++count<<"."<<cur_word<<endl;	
//		cout<<"==============================================================================="<<endl;
//		cout<<"Press <y>:rember    <n>:fotget    <q>:quit"<<endl;
//		if((cmd=getchar())=='q') break;	
//		else if(cmd=='y') old.push_back(word(cur_word,cur_expl));
//		else if(cmd=='n') wrong.push_back(word(cur_word,cur_expl));
//		cout<<cur_expl<<endl;
//	}
//	return ;
//}
//
//
////==============================================
//void user::study2()
//{
//	system("cls");
//	char cmd;
//	struct my_rand rand;
//	string cur_word,cur_expl;
//	int cur_rand,count=0;
//	clock_t begin,end;
//	
//	cout<<"==============================================================================="<<endl;
//	cout<<"==============================================================================="<<endl;
//	cout<<"Press <1>:start    <2>:quit"<<endl;
//	if(getchar()==2) return;
//	while(1){
//		cur_rand=rand(1,raw.size());
//		cur_word=raw[cur_rand].return_spe();
//		cur_expl=raw[cur_rand].return_chn();
//		cout<<++count<<"."<<cur_word<<endl;	
//		cout<<"==============================================================================="<<endl;
//		cout<<"Press <Enter>:next    <q>:quit"<<endl;
//		begin=clock()/CLOCKS_PER_SEC;
//		if((cmd=getchar())=='q') break;	
//		else if(cmd=='\r') end=clock()/CLOCKS_PER_SEC;	
//		if(end-begin<3)	old.push_back(word(cur_word,cur_expl));
//		else wrong.push_back(word(cur_word,cur_expl));
//		cout<<cur_expl<<endl;
//	}
//	return ;
//}
//void user::study3()
//{
//	system("cls");
//	char cmd;
//	struct my_rand rand;
//	string cur_word,cur_expl;
//	int cur_rand,count=0;
//	
//	cout<<"==============================================================================="<<endl;
//	cout<<"==============================================================================="<<endl;
//	cout<<"Press <1>:start    <2>:quit"<<endl;
//	if(getchar()==2) return;
//	while(1){
//		cur_rand=rand(1,raw.size());
//		cur_word=raw[cur_rand].return_spe();
//		cur_expl=raw[cur_rand].return_chn();
//		cout<<++count<<"."<<cur_word<<endl;	
//		cout<<"==============================================================================="<<endl;
//		cout<<"Press <Enter>:next    <q>:quit"<<endl;
//		if((cmd=getchar())=='q') break;	
//		cout<<cur_expl<<endl;
//	}
//	return ;
//}

void user::check_listen()
{
	system("cls");
	 int number;//产生随机数
	 int rightnumber=0;//记录对的单词
    int wrongnumber=0;//记录错误的单词
	while(true)
	{
		cout << "(按1播放读音，按2查看当前状态，按3退出测试)"<< endl;
		int k = choose(3);
		if( k == 1)
		{
			number = rand(0,raw.size());
			raw[number].play(cd);
			string speak;
			cin>>speak;
			bool d;//记录是对是错
			d=raw[number].check_spe(speak);
			if(d)
			{
				cd(string("passing.wav"));
				old.push_back(raw[number]);
				raw.erase(raw.begin()+number);
				++rightnumber;
			}
			else
			{
				cd(string("wrong.wav"));
				cout << "答错了" << endl;
				cout << "正确答案：" ;
				raw[number].output(cout);
				wrong.push_back(raw[number]);
				raw.erase(raw.begin()+number);
				++wrongnumber;
			}
		}
		else if(k == 2)
		{
			 cout<<"对了："<<rightnumber<<"个单词"<<endl;
			 cout<<"错了："<<wrongnumber<<"个单词"<<endl;
		}
		else
			return;
	}
}

void user::check_translation()
{
	system("cls");

    int number;//产生随机数

	int rightnumber=0;//记录对的单词
    int wrongnumber=0;//记录错误的单词
	while(true)
	{
		cout << "(按1显示翻译内容，按2查看当前状态，按3退出测试)"<< endl;
		int k = choose(3);
		if( k == 1)
		{
			number = rand(0,raw.size());
			cout << raw[number].return_chn() << endl;
			string speak;
			cin>>speak;
			bool d;//记录是对是错
			d=raw[number].check_spe(speak);
			if(d)
			{
				cd(string("passing.wav"));
				old.push_back(raw[number]);
				raw.erase(raw.begin()+number);
				++rightnumber;
			}
			else
			{
				cd(string("wrong.wav"));
				cout << "答错了" << endl;
				cout << "正确答案：" ;
				raw[number].output(cout);
				wrong.push_back(raw[number]);
				raw.erase(raw.begin()+number);
				++wrongnumber;
			}
		}
		else if(k == 2)
		{
			 cout<<"对了："<<rightnumber<<"个单词"<<endl;
			 cout<<"错了："<<wrongnumber<<"个单词"<<endl;
		}
		else
			return;
	}
}

void user::find_word()
{
	system("cls");
	while(true)
	{
		
		cout << "请输入要查找的单词:\n";
		string str1;
		cin >> str1;

		vector<word>::iterator iter = all.begin();
		while(iter != all.end())
		{
			if((*iter).return_spe() == str1)
				break;
			++iter;
		}
		if( iter == all.end())
		{
			cd(string("wrong.wav"));
			cout << "未找到该单词" << endl;
			cout << "(  按1: 继续查找. 按2.返回 )" << endl;
			int n = choose(2);
			if(n==2)
				return;
		}
		else
		{
			cd(string("passing.wav"));
			(*iter).output(cout);
			cout << "(按1：发音.  按2: 继续查找. 按3.返回 )" << endl;
			
			while(true)
			{
				int n = choose(3);
				if(n == 1)
					(*iter).play(my_play());
				else if(n == 3)
					return;
				else
					break;
			}
		}
	
	}
	
}

void user::study1()
{
	system("cls");
	int cmd;
	string cur_word,cur_expl;
	int count=0;
	
	cout<<"==============================================================================="<<endl;
	cout<<"==============================================================================="<<endl;
	cout << "Press <1>:start    <2>:quit" << endl;
	int k = choose(2);
	if(k == 2) return;
	while(1){
		int cur_rand=rand(1,raw.size());
		cur_word=raw[cur_rand].return_spe();
		cur_expl=raw[cur_rand].return_chn();
		cout<<++count<<"."<<cur_word<<endl;	
		cout<<"==============================================================================="<<endl;
		cout<<"Press <1>:rember    <2>:fotget   <3>:pronunciation <4>:quit"<<endl;
		while(true)
		{
		
			if((cmd=choose(4))==4) 	return ;	
			else if(cmd==1)
			{
				raw.erase(raw.begin()+cur_rand);
				old.push_back(word(cur_word,cur_expl));
				break;
			}
			else if(cmd==2) 
			{
				raw.erase(raw.begin()+cur_rand);
				wrong.push_back(word(cur_word,cur_expl));
				break;
			}
			else if(cmd == 3) raw[cur_rand].play(cd);
		}
		cout<<cur_expl<<endl;
	}

}

void user::study2()
{
system("cls");
	int cmd;

	string cur_word,cur_expl;
	int cur_rand,count=0;
	clock_t begin,end;
	
	cout<<"==============================================================================="<<endl;
	cout<<"==============================================================================="<<endl;
	cout<<"Press <1>:start    <2>:quit"<<endl;
	if(choose(2)==2) return;
	while(1){
		cur_rand=rand(1,raw.size());
		cur_word=raw[cur_rand].return_spe();
		cur_expl=raw[cur_rand].return_chn();
		cout<<++count<<"."<<cur_word<<endl;	
		cout<<"==============================================================================="<<endl;
		cout<<"Press <1>:next      <2>:quit"<<endl;
		begin=clock()/CLOCKS_PER_SEC;
		if((cmd=choose(2))==2) 
			break;	
		else if(cmd==1) 
			end=clock()/CLOCKS_PER_SEC;	
		if(end-begin<3)	
		{
			raw.erase(raw.begin()+cur_rand);
			old.push_back(word(cur_word,cur_expl));
		}
		else 
		{
			raw.erase(raw.begin()+cur_rand);
			wrong.push_back(word(cur_word,cur_expl));
		}
		cout<<cur_expl<<endl;
	}
	return ;
}

void user::study3()
{
system("cls");
	int cmd;
	string cur_word,cur_expl;
	int cur_rand,count=0;
	
	cout<<"==============================================================================="<<endl;
	cout<<"==============================================================================="<<endl;
	cout<<"Press <1>:start    <2>:quit"<<endl;
	if(choose(2)==2) return;
	while(1){
		cur_rand=rand(1,raw.size());
		cur_word=raw[cur_rand].return_spe();
		cur_expl=raw[cur_rand].return_chn();
		cout<<++count<<"."<<cur_word<<endl;	
		cout<<"==============================================================================="<<endl;
		cout<<"Press <1>:next   <2>:pronunciation  <3>:quit"<<endl;
		while(true)
		{
			if((cmd=choose(3))==3) 	return ;
			else if(cmd == 2)
				raw[cur_rand].play(cd);
			else
			break;
		}
		cout<<cur_expl<<endl;
	}

}