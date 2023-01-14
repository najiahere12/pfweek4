#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void myname(int x, int y);
void position(int x, int y);

int main()
{
int x = 50;
int y = 60;
myname(x,y);
gotoxy(x,y);
position(x,y);


}

void myname(int x, int y)
{
  cout<<"NN       N     AAA    JJJJJ  I   AAA               "<<endl;
  cout<<"N N      N    A   A     J    I  A   A             "<<endl;
  cout<<"N  N     N    A   A     J    I  A   A                  "<<endl;
  cout<<"N   N    N    AAAAA     J    I  AAAAA          "<<endl;
  cout<<"N    N   N    A   A     J    I  A   A             "<<endl;
  cout<<"N     N  N    A   A     J    I  A   A             "<<endl;
  cout<<"N      N N    A   A  J  J    I  A   A                  "<<endl;
  cout<<"N       NN    A   A  JJJJ    I  A   A                  "<<endl;

}
void gotoxy(int x,int y)

{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void position(int x, int y)
{
 gotoxy(45,50);
 



}



