/*
School: Tarrant County College District 
Teacher: Tyson McMillan 
Date: 12/07/2022 Purpose: 
Assignment 7 Recursion in C++ 
Skills Gained: Factorial, Validate input, C++   */
// credit Textbook Starting out with C++ from Control Structures to Objects Tenth Edition by Tony Gaddis

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// function prototype 
int factorial(int);



int main()
{ 
   cout << "***** Factorial Calculator [n!] ***** " << endl;
  int num {};

  bool done = false;
  while(!done) // for input validation
  {
    cout << "\nEnter the factorial number to calculate: ";
     if (cin >> num)
     {
       if (num > 0)
         done = true; //correct int obtained exit while condition
       else if (num < 0)
         cout << "\n"<< num << " is not a positive integer. Please enter a valid number.\n" <<endl;
     }
    else 
    {
      cout << "\n"<< "Invalid entry. Try again.\n";
      cout << "\n(To use the calculator please enter the positive integer value only)";
      cin.clear(); //clear screen
      cin.ignore();
      cout << endl;
    }
  }
  cout <<"\n" <<num<< "! = " << factorial(num) << ". "<< endl; // print equation and answer to screen
  
     
  }
int factorial(int n) //function to calculate factorial
  {
  if (n==0) 
    return 1;
  else
    return  n*factorial(n-1);
  }

