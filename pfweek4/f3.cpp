#include <iostream>
using namespace std;
void subtract(int number1,int number2);
void add(int number1,int number2);
void multiply(int number1,int number2);
void divide(int number1,int number2);


main()
{
int number1;
int number2;

char operation;
while(true)
{

cout<<"Enter number 1: "<<endl;
cin>>number1;
cout<<"enter number 2: "<<endl;
cin>>number2;
cout<<"enter operation: "<<endl;
cin>>operation;
cout<<endl;



if(operation =='+')
{
add(number1,number2);
}
if(operation =='-')
{
subtract(number1,number2);
}
if(operation =='*')
{
multiply(number1,number2);
}
if(operation =='/')
{
divide(number1,number2);
}

}

}

void subtract(int number1,int number2)
{
int subtract;
subtract = number1-number2;
cout<<"subtraction is: "<<subtract<<endl;
}

void divide(int number1,int number2)
{
int divide;
divide= number1/number2;
cout<<" divide is: "<<divide<<endl;
}
void add(int number1,int number2)
{
int add;
add = number1+number2;
cout<<" addition is: "<<add<<endl;
}
void multiply(int number1,int number2)
{
int multiply;
multiply = number1*number2;
cout<<"multiplication  is: "<<multiply<<endl;
}

							


     










