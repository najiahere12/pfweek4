#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void printmaze();
void playermover(int x,int y);

main()
{
printmaze();
int x = 4;
int y = 6;
while(true)
{
 playermover(x,y);
 if(x < 20)
   {
   x = x+1;
   }
 
 if (x == 20)
   {
    gotoxy(x-1,y);
    cout<<" ";
    x = 2;
   }

 }

}



void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void printmaze()
{
 cout<<"######################################################"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"#                                                    #"<<endl;
 cout<<"######################################################"<<endl;

}

void playermover(int x,int y)

{
 gotoxy(x-1,y);
 cout<<" ";
 gotoxy(x,y);
 cout<<"p";
 Sleep(200);
}


