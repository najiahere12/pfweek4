#include <iostream>
using namespace std;
void eligible(int age);
main()
{

  int age;
  while(true)
 
 {
   eligible(age);
   cout<<endl;
   }
}

void eligible(int age)
{
  cout<<"enter your age: ";
  cin>>age;
  if(age<18)
  {
    cout<<"not eligible";
  }

  if(age>=18)
  {
    cout<<" eligible";
  }
}



