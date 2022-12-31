# include<iostream>
# include<windows.h>
using namespace std;

void gotoxy(int,int);
void printMaze();
void playerMove(int x ,int y);
 
main()
{ 
  system ("cls");
  int x;
  int y;
  x= 8;
  y=1;
  printMaze(); 
  while(true)
{
  playerMove(x,y);
  if(y<10)
   {
     y = y + 1;
   }
    if(y==10 )
     {
       gotoxy(x ,y-1);
       cout<<" ";
       y = 1;
    }
}


}
void printMaze()
{
 cout<<"############################################################"<<endl;
 cout<<"##                                                        ##"<<endl; 
 cout<<"##                                                        ##"<<endl;
 cout<<"##                                                        ##"<<endl;  
 cout<<"##                                                        ##"<<endl;
 cout<<"##                                                        ##"<<endl;
 cout<<"##                                                        ##"<<endl;
 cout<<"##                                                        ##"<<endl;
 cout<<"##                                                        ##"<<endl;
 cout<<"##                                                        ##"<<endl;
 cout<<"##                                                        ##"<<endl;
 cout<<"##                                                        ##"<<endl;
 cout<<"############################################################"<<endl;
}
void gotoxy(int x , int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
 void playerMove(int x , int y)
{
  gotoxy(x,y-1);
  cout<<" ";
  gotoxy(x,y);
  cout<<"P";
  Sleep(300);
}