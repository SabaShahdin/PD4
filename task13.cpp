# include<iostream>
using namespace std;
main()
{
 int numberOfHolidays;
 int tomSleep;
 int timeOfPlayingOnWorkingDays;
 int numberOfDayInYear = 365;
 int timeOfPlayingOnHolidays;
 int timeForGameOnWorkingDays;
 int timeForGameOnHolidays;
 int  totalTimeForGamePlay;
 int diffrence;
 int  timeInHours;
 int  remainingMinutes;
 cout<<"entre holidays..";
 cin>>numberOfHolidays;
 tomSleep= 30000;
 timeOfPlayingOnWorkingDays= 63;
 timeOfPlayingOnHolidays =127;
 timeForGameOnWorkingDays = (numberOfDayInYear- numberOfHolidays)*63; 
 timeForGameOnHolidays = numberOfHolidays*127;
 totalTimeForGamePlay = timeForGameOnWorkingDays + timeForGameOnHolidays;
 diffrence=30000 -  totalTimeForGamePlay;
 timeInHours = diffrence/60;
 remainingMinutes= diffrence%60;
 cout<<"total diffrence is ..."<<timeInHours<<"hours"<<remainingMinutes<<"minutes"<<endl;
 if(totalTimeForGamePlay>30000)
  {
    cout<<"tom will run away";
  }
   if(totalTimeForGamePlay< 30000)
   {
     cout<<"tom sleep well";
   } 
} 