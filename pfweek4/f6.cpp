#include <iostream>
using namespace std;

void result(int score);
main()
{

  while (true)
{
 int score;
 cout<<"enter score: ";
  cin>>score;
  result(score);
  cout<<endl;
}
 
 
 }

void result(int score)
{


  if(score>50)
   {
    cout<<"pass";
    }
   if(score<50)
   {
    cout<<"fail";
    }
    if(score==50)
   {
    cout<<"work hard";
   }
}
