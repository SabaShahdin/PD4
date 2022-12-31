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
  y=6;
  printMaze(); 
  while(true)
{
  playerMove(x,y);
  if(x<34)
   {
     x = x + 1;
   }
    if(x == 34)
     {
       gotoxy(x-1,y);
       cout<<" ";
       x = 8;
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
  gotoxy(x-1,y);
  cout<<" ";
  gotoxy(x,y);
  cout<<"P";
  Sleep(300);
}