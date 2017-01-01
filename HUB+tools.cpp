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
using namespace std; /* The line "using namespace std: tells the compiler to use the std (standard) namespace Note: std provides features of the C++ Standard Library */

// Declared Variables
int myVariable = 10;
int a = 30;
int b = 15;
int sum = a + b;

int main()  {
    cout << "Main Menu!\n" << "How are you today? These are the multiple options this tool provides:\n\n" << endl;
    cout << endl << "Option 1\n";
    cout << "\nInput\n";
    cout << "Option 3\n\n";
    cout << "Sum" << " = " << sum << endl;
    cout << "myVariable " << myVariable;
    return 0;
}

