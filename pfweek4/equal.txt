#include <iostream>
using namespace std;
void Equal(int a, int b);
main()
{
  int a;
  int b;
  cout << "Enter first Integer: ";
  cin >> a;
  cout << "Enter second Integer: ";
  cin >> b;
  cout << endl;
  Equal(a , b);
  
}
void Equal(int a, int b)
{
 
  if (a!= b)
  {
    cout << "FALSE";
  }
 if(a == b)
  {
    cout << "TRUE" ;  
  }
 
}