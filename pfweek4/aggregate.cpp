#include <iostream>
using namespace std;
void menu();
void aggregate(string name, float matric, float inter, float ecat);
void rollNumber(string name1 ,int Emarks1,string name2 ,int Emarks2);
main()
{
  int choice;
  string sname1;
  float s1marksM; 
  float s1marksI; 
  float s1marksE; 
  string sname2;
  float s2marksM; 
  float s2marksI; 
  float s2marksE;
  string key;
  while (true)
  {
    system("cls");
    menu();
    cout << "Enter Choice: ";
    cin >> choice;
    if (choice == 1)
    {
      system("cls");
      cout << "You choosed: 1" << endl;
      cout << "Enter your Name: ";
      cin >> sname1;
      cout << "Enter Your Matric Marks(out of 1100): ";
      cin >> s1marksM;
      cout << "Enter Your Inter Marks(out of 550): ";
      cin >> s1marksI;
      cout << "Enter Your ECAT Marks: ";  
      cin >> s1marksE;
      cout << "Enter any key to continue...";
      cin >> key;  
    }
    if (choice == 2)
    {
      system("cls");    
      cout << "You choosed: 2" << endl;
      cout << "Enter your Name: ";
      cin >> sname2;
      cout << "Enter Your Matric Marks(out of 1100): ";
      cin >> s2marksM;
      cout << "Enter Your Inter Marks(out of 550): ";
      cin >> s2marksI;
      cout << "Enter Your ECAT Marks: ";  
      cin >> s2marksE;
      cout << "Enter any key to continue.";
      cin >> key;  
    }
    if (choice == 3)
    {
      system("cls");
      aggregate(sname1, s1marksM, s1marksI, s1marksE);
      cout << "Enter any key to continue...";
      cin >> key;   
    }
    if (choice == 4)
    {
      system("cls");
      aggregate(sname2, s2marksM, s2marksI, s2marksE);  
      cout << "Enter any key to continue.";
      cin >> key;   
    }
      if (choice == 5)
    {
      system("cls");
      rollNumber(sname1 , s1marksE, sname2 , s2marksE);
      
      cout << "Enter any key to continue.";
      cin >> key;   
    }
    

   }
}
void menu()
{
  cout << endl;
  cout << endl;
  cout << endl;
  cout << "            ***********************" << endl;
  cout << "            *      UET LHR        *" << endl;
  cout << "            ***********************" << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  
  cout << "Welcome to UET Admission Management System";
  cout << endl;
  cout << endl;
  cout << "Press 1 to Enter Details of 1st Student !" << endl;
  cout << "Press 2 to Enter Details of 2nd Student !" << endl;
  cout << "Press 3 to Calculate the aggregate of 1st Student !" << endl;
  cout << "Press 4 to Calculate the aggregate of 2nd Student !" << endl;
  cout << "Press 5 to Display the student with RollNumber 01 !" << endl;

}

void aggregate(string name, float matric, float inter, float ecat)
{
  float aggregate = ((matric/1100) * 30) + ((inter/550) * 30) + ((ecat/400) * 40);
  cout << name << "'s aggregate is " << aggregate << endl;
}

void rollNumber(string name1 ,int Emarks1,string name2 ,int Emarks2)
{
  if (Emarks1 > Emarks2)
  {
    cout << "Roll Number 01 is: " << name1  << endl;

  }
  if (Emarks1 < Emarks2)
  {
    cout << "Roll Number 01 is: " << name2 << endl;

  }
}
