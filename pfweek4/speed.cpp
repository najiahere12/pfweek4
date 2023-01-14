#include <iostream>
using namespace std;
void challan(int speed);
main()
{
  int speed;
  cout << "Enter Your Speed: ";
  cin >> speed;
  cout << endl;
  challan(speed);
}
void challan(int speed)
{


  if(speed <= 100)
  {
    cout << "Perfect! You are going good.";
    cout << endl;
  }

  if(speed > 100)
  {
    cout << "Halt... You will be Challaned!";
    cout << endl;
  }
  

}