#include <iostream>
using namespace std;
void subtract(int number1, int number2);
void division(int number1, int number2);
main()
{

int number1;
int number2;

cout<<"Enter number 1: ";
cin>> number1;
cout<<"Enter number 2: ";
cin>> number2;
subtract(number1,number2);
division(number1,number2);

}

void subtract(int number1,int number2)
{
int subtract;
subtract = number1-number2;
cout<<"subtraction is: "<<subtract<<endl;


}
void division(int number1,int number2)
{
int division;
division = number1/number2;
cout<<"division is: "<<division<<endl;

}





