# include <iostream>
using namespace std;

void checkInteger(int x ,int y);
main()
{
  int firstNumber;
  int secondNumber;
  cout<<"entre value first number...";
  cin>>firstNumber;
  cout<<"entre value second number...";
  cin>>secondNumber;
  checkInteger(firstNumber , secondNumber);
}


  void checkInteger(int x , int y)
 {
   if(x-y == 0)
     {
       cout<<"true";
     }
       if (x-y!=0)
       {
         cout<<"false";
       }
 }