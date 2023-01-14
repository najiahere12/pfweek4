#include <iostream>
using namespace std;
void calculatebill(string day,int amount);

main()
{

int amount;
string day;
cout<<"enter amount";
cin>>amount;
cout<<"enter day";
cin>>day;
calculatebill(day,amount);

}
void calculatebill(string day,int amount)
{
float discount;
float total;
if(day=="sunday")
{

 discount = (amount*10)/100;
 total= amount - discount;
 cout<<"your bill: "<<total;


}

if(day!="sunday")
{

 
 
 cout<<"your bill: "<<amount;


}
}