# include <iostream>
# include <windows.h>
using namespace std;

void printNameS();

void gotoxy(int x , int y);

main()
{     
     system("cls");
     int x ;
     int y ;
     gotoxy(10 ,18);
     printNameS();
    
}


void printNameS()
{
 cout<<"     @@@@@@@@@@         ************       $$$$$$$$        *************      ";gotoxy(10,19);                  
 cout<<"    @@@                **          **      $      $       **           **    ";gotoxy(10,20);
 cout<<"    @@                 **          **      $      $       **           **   "; gotoxy(10,21);
 cout<<"    @@                 **          **      $      $       **           **";gotoxy(10,22);
 cout<<"     @@@@@@@@@@        **************      $$$$$$$$       *************** ";gotoxy(10,23);
 cout<<"            @@@        **          **      $      $       **           **";gotoxy(10,24);
 cout<<"             @@        **          **      $      $       **           **";gotoxy(10,25);
 cout<<"             @@        **          **      $      $       **           **"; gotoxy(10,26);
 cout<<"    @@@@@@@@@@         **          **      $$$$$$$$       **           **"; gotoxy(10,27);
}

void gotoxy(int x , int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}