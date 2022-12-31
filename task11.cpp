# include<iostream>
using namespace std;

void challanIssuing(int speed);

 main()
{
 int speed;
 cout<<"entre the speed..";
 cin>> speed;
 challanIssuing(speed);
}
 void challanIssuing(int speed)
 {
   if (speed <= 100)
   {
      cout<<"you are going good ...";
    }
     if(speed > 100)
     {
       cout<<"halt...YOU WILL BE challenged ";
     }
}
