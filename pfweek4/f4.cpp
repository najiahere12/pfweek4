#include <iostream>
using namespace std;

void type(int number);
main()
{
int number;
while(true)
{
cout<<"Enter number: ";
cin>>number;
type(number);
cout<<endl;
}


}

void type(int number)
 {
   if(number%2!=0)
  {
    
   cout<<"entered number is odd";
  }
   if(number%2==0)
  {
    cout<<"entered number is even";
  }
}
