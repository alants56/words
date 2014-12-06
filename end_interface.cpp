#include "end_interface.h"

void end_interface::draw()
{
	system("cls");
  cout<<"                      $$ THE       END $$                         "<<endl;
  cout<<"__________________________________________________________________"<<endl;
  cout<<"*****************************************************************"<<endl;
  cout<<"**                                                             **"<<endl;
  cout<<"* *          ÖÆ ×÷:                                           * *"<<endl;
  cout<<"*  *                                                         *  *"<<endl;  
  cout<<"*                           01111223                            *"<<endl;
  cout<<"*                                                               *"<<endl;
  cout<<"*                           01111261                            *"<<endl;
  cout<<"*                                                               *"<<endl;
  cout<<"*                           01111295                            *"<<endl;
  cout<<"*                                                               *"<<endl;
  cout<<"*                           01111296                            *"<<endl;
  cout<<"*  *                                                         *  *"<<endl;  
  cout<<"* *                                                           * *"<<endl;
  cout<<"**                                                             **"<<endl;
  cout<<"*****************************************************************"<<endl;
  cout<<"__________________________________________________________________"<<endl; 
  cout<<"     ################# All RIGHTS RESERVED #################     "<<endl;
}

void end_interface::play(my_play& temp)
{
	temp(end_path);
}