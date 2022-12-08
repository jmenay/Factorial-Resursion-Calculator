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
 
 // cin >> num;

  bool done = false;
  while(!done)
  {
    //cout << "\n(To use the calculator please enter the integer value only)" << endl;
    cout << "\nEnter the factorial number to calculate: ";
     if (cin >> num)
     {
       if (num > 0)
         done = true;
       else if (num < 0)
         cout << "\n"<< num << " is not a positive integer. Please enter a valid number.\n" <<endl;
     }
    else 
    {
    cout << "\n"<< "Invalid entry. Try again.\n";
      cout << "\n(To use the calculator please enter the positive integer value only)";
      cin.clear();
      cin.ignore();
      cout << endl;
    }
  }
  cout <<"\n" <<num<< "! = " << factorial(num) << ". "<< endl;
  
     
  }
int factorial(int n) 
  {
  if (n==0) 
    return 1;
  else
    return  n*factorial(n-1);
  }
/*int factorial(int n, int result) 
  {
  if (n==0) 
    return 1;
  else
    result = n*factorial(n-1);
    return result;
  }
*/
