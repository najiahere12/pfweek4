#include <iostream>
#include <windows.h>
using namespace std;

void equal(int x, int y);

main()
{
  int x;
  int y;
  equal(x,y);
}


void equal(int x, int y)
{
cout<<"Enter number 1: ";
cin>>x;
cout<<"Enter number 2: ";
cin>>y;

if(x==y)
{
cout<<"true";
}
if(x!=y)
{
cout<<"false";
}



}



