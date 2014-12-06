void user::check_listen()
{
	system("cls");
    cout<<"��������Ҫ��д���ʵĸ�����"<<endl;
    int num;
    cin>>num;
    cout<<"׼�������𣿡�y����ʼ"<<endl;
    char choice;
    cin>>choice;
    while(choice!='y'){
        cout<<"׼�������𣿡�y����ʼ"<<endl;
        cin>>choice;
    }
    my_rand rand;
    int number;//���������
    my_play cd;
    int rightnumber=0;//��¼�Եĵ���
    int wrongnumber=0;//��¼����ĵ���
    for(int i=0;i<num;++i){
        number=rand(0,raw.size());
        cout<<"��"<<i+1<<"�����ʣ�";
        raw[number].play(cd);
        string speak;
        cin>>speak;
        bool d;//��¼�Ƕ��Ǵ�
        d=raw[number].check_spe(speak);
        if(d){
            old.push_back(raw[number]);
            raw.erase(raw.begin()+number);
            ++rightnumber;
        }
        else{
            wrong.push_back(raw[number]);
            raw.erase(raw.begin()+number);
            ++wrongnumber;
        }
    }
    cout<<"���ˣ�"<<rightnumber<<"������"<<endl;
    cout<<"���ˣ�"<<wrongnumber<<"������"<<endl;
	getchar();
}
void user::check_translation()
{
	system("cls");
    cout<<"��������Ĭд����������˼�ĸ�����"<<endl;
    int num;
    cin>>num;
    cout<<"׼�������𣿡�y����ʼ"<<endl;
    char choice;
    cin>>choice;
    while(choice!='y'){
        cout<<"׼�������𣿡�y����ʼ"<<endl;
        cin>>choice;
    }
    my_rand rand;
    int number;//���������
    int rightnumber=0;//��¼�Եĵ���
    int wrongnumber=0;//��¼����ĵ���
    for(int i=0;i<num;++i){
        number=rand(0,raw.size());
        cout<<"��"<<i+1<<"�����ʣ�";
        cout<<raw[number].return_spe();
        string write;
        bool d;//��¼�Ƕ��Ǵ�
        d=raw[number].check_chn(write);
        if(d){
            old.push_back(raw[number]);
            raw.erase(raw.begin()+number);
            ++rightnumber;
        }
        else{
            wrong.push_back(raw[number]);
            raw.erase(raw.begin()+number);
            ++wrongnumber;
        }
    }
    cout<<"���ˣ�"<<rightnumber<<"������"<<endl;
    cout<<"���ˣ�"<<wrongnumber<<"������"<<endl;
	getchar();
}


void user::study1()
{
	system("cls");
	char cmd;
	struct my_rand rand;
	string cur_word,cur_expl;
	int count=0;
	
	cout<<"==============================================================================="<<endl;
	cout<<"==============================================================================="<<endl;
	cout<<"Press <1>:start    <2>:quit"<<endl;
	if(getchar()==2) return;
	while(1){
		int cur_rand=rand(1,raw.size());
		cur_word=raw[cur_rand].return_spe();
		cur_expl=raw[cur_rand].return_chn();
		cout<<++count<<"."<<cur_word<<endl;	
		cout<<"==============================================================================="<<endl;
		cout<<"Press <y>:rember    <n>:fotget    <q>:quit"<<endl;
		if((cmd=getchar())=='q') break;	
		else if(cmd=='y') old.push_back(word(cur_word,cur_expl));
		else if(cmd=='n') wrong.push_back(word(cur_word,cur_expl));
		cout<<cur_expl<<endl;
	}
	return ;
}


//==============================================
void user::study2()
{
	system("cls");
	char cmd;
	struct my_rand rand;
	string cur_word,cur_expl;
	int cur_rand,count=0;
	clock_t begin,end;
	
	cout<<"==============================================================================="<<endl;
	cout<<"==============================================================================="<<endl;
	cout<<"Press <1>:start    <2>:quit"<<endl;
	if(getchar()==2) return;
	while(1){
		cur_rand=rand(1,raw.size());
		cur_word=raw[cur_rand].return_spe();
		cur_expl=raw[cur_rand].return_chn();
		cout<<++count<<"."<<cur_word<<endl;	
		cout<<"==============================================================================="<<endl;
		cout<<"Press <Enter>:next    <q>:quit"<<endl;
		begin=clock()/CLOCKS_PER_SEC;
		if((cmd=getchar())=='q') break;	
		else if(cmd=='\r') end=clock()/CLOCKS_PER_SEC;	
		if(end-begin<3)	old.push_back(word(cur_word,cur_expl));
		else wrong.push_back(word(cur_word,cur_expl));
		cout<<cur_expl<<endl;
	}
	return ;
}
void user::study3()
{
	system("cls");
	char cmd;
	struct my_rand rand;
	string cur_word,cur_expl;
	int cur_rand,count=0;
	
	cout<<"==============================================================================="<<endl;
	cout<<"==============================================================================="<<endl;
	cout<<"Press <1>:start    <2>:quit"<<endl;
	if(getchar()==2) return;
	while(1){
		cur_rand=rand(1,raw.size());
		cur_word=raw[cur_rand].return_spe();
		cur_expl=raw[cur_rand].return_chn();
		cout<<++count<<"."<<cur_word<<endl;	
		cout<<"==============================================================================="<<endl;
		cout<<"Press <Enter>:next    <q>:quit"<<endl;
		if((cmd=getchar())=='q') break;	
		cout<<cur_expl<<endl;
	}
	return ;
}
