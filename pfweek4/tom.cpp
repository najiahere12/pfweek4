#include <iostream>
using namespace std;

main()
{
  int holiday;    
  int workingday;
  int time;
  int diff;
  int hour , min;
  cout << "Enter Number of Holidays: ";
  cin >> holiday;
  workingday = 365 - holiday;
  time = (workingday * 63) + (holiday * 127);
  diff = 30000 - time;
  hour = diff / 60;
  min = diff % 60;
  cout << endl;
  
  if(diff < 0)
  {
    cout << "Tom will run away ";
    cout <<(-1 * hour) << " hours and " <<(-1 * min) <<" for play.";
  }   
   if(diff > 0)
  {
    cout << "Tom sleeps well ";
    cout << hour << " hours and " << min <<" minutes less for play.";
  } 


  
}