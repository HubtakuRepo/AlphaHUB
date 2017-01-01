/*
HUB+tools.cpp
Created by Gregory Gipson on 12/31/16.
A start for a new year of A LOT of CODING LOVE
Copyright (c) 2016 www.hubtaku.com | www.gregorygipson.xyz All rights reserved.
*/

/* Program executions begins with the main function, " int main() "
"{}" indicate the beginning and end of a function body.
Lines below is the results in the display of "Hello World" on the screen also considered to be the function body
Section below is a "BLOCK" - set of logically connected statements, surrounded by opening and closing curly braces. */

#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std; /* The line "using namespace std: tells the compiler to use the std (standard) namespace Note: std provides features of the C++ Standard Library */

// Declared Variables
int myVariable = 10;
int a = 30;
int b = 15;
int sum = a + b;
int input;
// User Input
int data1;
int input1 = data1;

int main()
{
    cout << "Main Menu!\n" << "How are you today? These are the multiple options this tool provides:\n\n" << endl;
    cout << endl << "Option 1\n";
    cout << "\ndata1input\n";
    cin = data1;
    cout << "Option 3\n\n";
    cout << "Sum" << " = " << sum << endl;
    cout << "myVariable " << myVariable;
}

o{
    cin >> input;
    switch (input) {
      case (1):
        do{
          cin >> input;
          switch (input) {
            case (1): //do stuff
            case (2): //do stuff
          }
        }while(input != 3);
        break;
      case (2):
        break;
    }
  }while(true);
