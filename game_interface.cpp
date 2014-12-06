#include "game_interface.h"

game_interface::game_interface(const string& temp) : game_path(temp){}

void game_interface::draw()
{
	system("cls");
  cout<<"                  $$ MODEL      SELECTION $$                      "<<endl;
  cout<<"__________________________________________________________________"<<endl;
  cout<<"*****************************************************************"<<endl;
  cout<<"**                                                             **"<<endl;
  cout<<"* *                                                           * *"<<endl;
  cout<<"*  *                  1.      ��ͨ����                       *  *"<<endl;  
  cout<<"*                                                               *"<<endl;
  cout<<"*                     2.      ʱ�����                          *"<<endl;
  cout<<"*                                                               *"<<endl;
  cout<<"*                     3.      ���ģʽ                          *"<<endl;
  cout<<"*                                                               *"<<endl;
  cout<<"*                     4.      ��    ��                          *"<<endl;
  cout<<"*                                                               *"<<endl;
  cout<<"*                     5.      ��������                          *"<<endl;
  cout<<"*                                                               *"<<endl;
  cout<<"*  *                  6.      ��    ��                       *  *"<<endl;  
  cout<<"* *                                                           * *"<<endl;
  cout<<"**                    7.      ��    ��                         **"<<endl;
  cout<<"*****************************************************************"<<endl;
  cout<<"__________________________________________________________________"<<endl; 
  cout<<"     ################# All RIGHTS RESERVED #################     "<<endl;
  cout << "��ѡ��" ;
}

void game_interface::play(my_play& temp)
{
	temp(game_path);
}
