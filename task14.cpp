# include<iostream>
# include<windows.h>
using namespace std;
void headerUAMS() ;
void aggregate (string name , float matric , float intermediate ,  float ecat );
void compare( string nameStd1 , float ecatMarksStd1 , string nameStd2 , float  ecatMarksStd2 );

main()
{ 
  system("cls");
  string name;
  float matric;
  float intermediate;
  float ecat;
  string nameStd1;
  string nameStd2;
  float ecatMarksStd1;
  float ecatMarksStd2;
   headerUAMS(); 
  cout<<"entre your name..";
  cin>>name;
  cout<<"entre yout matric marks...";
  cin>>matric;
  cout<<"entre your intermediate marks...";
  cin>>intermediate;
  cout<<"entre your ecat marks...";
  cin>>ecat;
  cout<<"entre name of student 1 ...";
  cin>> nameStd1;
  cout<<"entre ecat marks of st 1..";
  cin>>ecatMarksStd1;
  cout<<"entre name of student 2... ";
  cin>>nameStd2;
  cout<<"entre ecat marks of st 2...";
  cin>>ecatMarksStd2;
  aggregate (name , matric , intermediate , ecat );
  compare(nameStd1 , ecatMarksStd1 , nameStd2 , ecatMarksStd2 );

}

void headerUAMS()
{
 cout <<"         ############################################################################### "<<endl;
 cout <<"         ##                                                                           ##  "<<endl;
 cout <<"         ##                                                                           ##  "<<endl;
 cout <<"         ##                    UNIVERSITY  ADMISSION   MANAGEMENT                     ##  "<<endl;
 cout <<"         ##                                                                           ##  "<<endl;
 cout <<"         ##                             SYSTEM                                        ##  "<<endl;
 cout <<"         ##                                                                           ##  "<<endl;
 cout <<"         ##                                                                           ##  "<<endl;
 cout <<"         ##                                                                           ##  "<<endl;
 cout <<"         ##                                                                           ##  "<<endl;
 cout <<"         ##                                                                           ##  "<<endl;
 cout <<"         ##                                                                           ##  "<<endl;
 cout <<"         ###############################################################################  "<<endl;
}
  void aggregate (string name , float matric , float intermediate , float ecat )
{
 float matricresult;
 float interresult;
 float ecatresult;
 float aggregate;
 matricresult=matric/1100.0*100*0.30;
 interresult=intermediate/550.0*100*0.30;
 ecatresult =ecat/400.0*100*0.40;
 aggregate = matricresult+interresult+ecatresult;
 cout<<"   aggregate is.... "<<aggregate<<endl;
}
 void compare( string nameStd1 , float ecatMarksStd1 , string nameStd2 , float ecatMarksStd2 )
{
 
    if(ecatMarksStd1-ecatMarksStd2 >0)
     { 
        cout<<"   roll no of student 1 is 1"<<endl;
      }
      if(ecatMarksStd1-ecatMarksStd2 <0)
       {
         cout<<"   roll number of student 2 is 1"<<endl;
      
       }
}
























