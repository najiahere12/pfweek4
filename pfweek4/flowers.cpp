#include <iostream>
using namespace std;
void discount(float tprice);
main()
{
  int redRose;
  int whiteRose;
  int tulip;
  float tprice;
  cout << " Quantity of Red Roses: ";
  cin >> redRose;
  cout << " Quantity of White Roses: ";
  cin >> whiteRose;
  cout << " Quantity of Tulips: ";
  cin >> tulip;
  cout << endl;
  tprice = (redRose * 2.00) + (whiteRose * 4.10) + (tulip * 2.50);      
  cout << "Original Price is: " << tprice <<endl ;
  discount(tprice); 

}
void discount(float tprice)
{
  if(tprice > 200)
  {
    float discountonbill;
   
    discountonbill = tprice * 0.80;
    
    
    cout << "Price after discount is: " << discountonbill; 
  }  
} 