#include <iostream>
using namespace std;
void discount(string country, float ticket); 
main()
{
  while(true)
  {
    string country;
    float ticket;
    cout << "Enter Name of country: ";
    cin >> country ;
    cout << "Enter Ticket Price: ";
    cin >> ticket;
    cout << endl;
    discount(country , ticket); 
  }
}
void discount(string country, float ticket)
{
  if(country =="pakistan")
  {
    float discountprice;
    discountprice = ticket * 0.95;
    cout << "ticket after discount is " << discountprice; 
    cout << endl; 
  } 

  if(country =="ireland")
  {
    float discountprice;
    discountprice = ticket * 0.90;
    cout << "ticket after discount is " << discountprice;
    cout << endl;  
  } 

  if(country =="india")
  {
    float discountprice;
    discountprice = ticket * 0.80;
    cout << "ticket after discount is " << discountprice;
    cout << endl;  
  } 

  if(country =="england")
  {
    float discountprice;
    discountprice = ticket * 0.70;
    cout << "ticket after discount is " << discountprice;
    cout << endl;  
  } 

  if(country =="canada")
  {
    float discountprice;
    discountprice = ticket * 0.55;
    cout << "ticket after discount is " << discountprice;
    cout << endl;  
  } 
 
}
