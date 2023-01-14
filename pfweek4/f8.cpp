#include <iostream>
using namespace std;
void bill(string day,int amount);
main()
{
 int amount;
 string day;
 while(true)
 {
  cout<<"enter day: ";
  cin>>day;
  cout<<"enter amount: ";
  cin>>amount;
  bill(day,amount);
 }
}

void bill(string day,int amount)
{
 float sundayd;
 float totalsun;
 float disc;
 float totl;
 
 sundayd = amount*0.1;
 totalsun=amount-sundayd;
 disc=amount*0.5;
 totl=amount-disc;

 if(day=="sunday")
 {
  cout<<"bill: "<<totalsun<<endl;
 }

 
 if(day=="monday")
 {
  cout<<"bill: "<<totl<<endl;
 }

 
 if(day=="tuesday")
 {
  cout<<"bill: "<<totl<<endl;
 }

 
 if(day=="wednesday")
 {
  cout<<"bill: "<<totl<<endl;
 }

 
 if(day=="thursday")
 {
  cout<<"bill: "<<totl<<endl;
 }

 
 if(day=="friday")
 {
  cout<<"bill: "<<totl<<endl;
 }

  
 if(day=="saturday")
 {
  cout<<"bill: "<<totl<<endl;
 }
}











