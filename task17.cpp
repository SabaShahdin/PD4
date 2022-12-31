# include<iostream>
 # include<windows.h>
using namespace std;

void gotoxy(int,int);
void printMaze();
void playerMovex(int x ,int y);
void playerMovey(int x ,int y);

main()
 {
   system ("cls");
   printMaze();
   int x = 6;
   int y = 7;
   
    while(true)
   { 
       playerMovex(x , y);
        if(x < 44 )
          {
              x= x + 1;
           }
            if(x == 44)
              {   
                  gotoxy(x-1,y);
                   cout<<" ";  
                playerMovey(x,y);
                  gotoxy(x, y+1);
                  y= y+1;
        	  
                 
                  
                }
                    if(y ==17)
                     { gotoxy(x,y-1);
                      cout<<" ";
                      y = 7 ;
                      gotoxy(x, y+1);
                       
               }
            
            
        }


 }
 void printMaze()
{
 cout <<" ################################################################################  "<<endl;
 cout <<" ||.. .........................................   .......   ..............     ||  "<<endl;
 cout <<" ||.. %%%%%%%%%%%%%%%        ...      %%%%%%%%%%%%%%        |%|...    %%%..    ||  "<<endl;
 cout <<" ||..      |%|    |%|     |%|...      |%|        |%|        |%|...    |%|      ||  "<<endl;
 cout <<" ||..      |%|    |%|     |%|...      |%|        |%|        |%|...    |%|      ||  "<<endl;
 cout <<" ||..      %%%%%%%%%% ... |%|...      %%%%%%%%%%%%%%           ...    %%%.     ||  "<<endl;
 cout <<" ||..      |%|        ... |%|...      .................... |%|...       ..     ||  "<<endl;
 cout <<" ||..      %%%%%%%%%% ... |%|...      %%%%%%%%%%%%%%%%     |%|...    %%%..     ||  "<<endl;
 cout <<" ||..             |%|.                |%|......            |%|...     |%|      ||  "<<endl;
 cout <<" ||..      .......|%|.                |%|......|%|            ....    |%|..    ||  "<<endl;
 cout <<" ||..|%|   |%|%%%%|%|.|%|.|%|            ......|%|            ....|%| |%|..    ||  "<<endl;
 cout <<" ||..|%|   |%|    |%|..   %%%%%%%%%%%%%  ......|%|   G        ....|%| |%|..    ||  "<<endl;
 cout <<" ||..|%|   |%|    |%|..         ....|%|    %%%%%%%    |%|      ...|%|    ..|%| ||  "<<endl;
 cout <<" ||..|%|              .         ....|%|               |%|       ..|%|     .|%| ||  "<<endl;
 cout <<" ||.................................................  |%|       ..|%|.  .....  ||  "<<endl;
 cout <<" ||   ..............................................                   ....... ||  "<<endl;
 cout <<" ||..|%|   |%|   |%|..      %%%%%%%%%%%   ......|%|       |%|   ..|%|%%%%%%%%% ||  "<<endl;
 cout <<" ||..|%|   %%%%%%%%%%%             ...|%|    %%%%%%       |%|   ..|%|..        ||  "<<endl;
 cout <<" ||.................................................      |%|   ..|%|........  ||  "<<endl;
 cout <<" ################################################################################  "<<endl;
}
 void gotoxy(int x , int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
  void playerMovex(int x , int y)
{
    gotoxy(x-1,y);
    cout<<" ";
    gotoxy(x , y);
    cout<< "P" ;
    Sleep(300);
}
void playerMovey(int x ,int y)
{
     gotoxy(x,y-1);
    cout<<" ";
    gotoxy(x , y);
    cout<< "P" ;
    Sleep(300);
}
 
