# include<iostream>

using namespace std;
void reverseInput(string input);

main()
{
   string input;
   cout<<"entre true or false...";
   cin>> input;
   reverseInput(input);
}

void reverseInput(string input)
{
   
  if(input == "true")
    {
      cout<<"false";
    }
     if(input == "false")
      {
         cout<<"true";
      }
}