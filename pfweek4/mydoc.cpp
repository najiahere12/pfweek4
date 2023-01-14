#include <iostream>
using namespace std;
#include <windows.h>

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X - x;
  coordinates.Y - y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

int main()
{
 cout<<"p";
system("cls");
gotoxy(15,15);
cout<<"p";
return 0;

}