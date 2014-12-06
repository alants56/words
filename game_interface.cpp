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
  cout<<"*  *                  1.      ÆÕÍ¨²âÊÔ                       *  *"<<endl;  
  cout<<"*                                                               *"<<endl;
  cout<<"*                     2.      Ê±¼ä²âÊÔ                          *"<<endl;
  cout<<"*                                                               *"<<endl;
  cout<<"*                     3.      ä¯ÀÀÄ£Ê½                          *"<<endl;
  cout<<"*                                                               *"<<endl;
  cout<<"*                     4.      ·­    Òë                          *"<<endl;
  cout<<"*                                                               *"<<endl;
  cout<<"*                     5.      ÌýÁ¦²âÊÔ                          *"<<endl;
  cout<<"*                                                               *"<<endl;
  cout<<"*  *                  6.      ²é    ÕÒ                       *  *"<<endl;  
  cout<<"* *                                                           * *"<<endl;
  cout<<"**                    7.      ÍË    ³ö                         **"<<endl;
  cout<<"*****************************************************************"<<endl;
  cout<<"__________________________________________________________________"<<endl; 
  cout<<"     ################# All RIGHTS RESERVED #################     "<<endl;
  cout << "ÇëÑ¡Ôñ£º" ;
}

void game_interface::play(my_play& temp)
{
	temp(game_path);
}
