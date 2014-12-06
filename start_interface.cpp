#include "strat_interface.h"

start_interface::start_interface(const string &path): start_path(path){}
void start_interface::play(my_play& temp)
{
	temp(start_path);
}

void start_interface::draw()
{
	system("cls");
  cout<<"            $$ WELCOME     TO     THE     SYSTEM! $$              "<<endl;
  cout<<"__________________________________________________________________"<<endl;
  cout<<"*****************************************************************"<<endl;
  cout<<"**                                                             **"<<endl;
  cout<<"* *                                                           * *"<<endl;
  cout<<"*  *                  1.      µÇ   Â½                        *  *"<<endl;  
  cout<<"*                                                               *"<<endl;
  cout<<"*                     2.      ×¢   ²á                           *"<<endl;
  cout<<"*                                                               *"<<endl;
  cout<<"*  *                  3.      ÍË   ³ö                        *  *"<<endl;  
  cout<<"* *                                                           * *"<<endl;
  cout<<"**                    4.      °ï   Öú                          **"<<endl;
  cout<<"*****************************************************************"<<endl;
  cout<<"__________________________________________________________________"<<endl; 
  cout<<"     ################# All RIGHTS RESERVED #################     "<<endl;
  cout << "ÇëÑ¡Ôñ£º" ;
}

