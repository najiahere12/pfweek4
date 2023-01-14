#include <iostream>
using namespace std;
void reverse(string a);
main()
{
  string a;
  cout << "Enter Your Statement: ";
  cin >> a;
  cout << endl;
  reverse(a);
   
}
void reverse(string a)
{
  if(a == "true")
  {
    cout << "FALSE";
  }

  if(a == "false")
  {
    cout << "TRUE";
  }
}