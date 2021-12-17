///////////////////////////////////////////////////////////////////
//  Module : sixth.cpp
//
//  purpose : demonstration of standard input/output using
//                       cin and cout
//////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
int main()
{
    // ask the user a question
    cout << "Hello, whats your name? \n";

    // create a place to store 25 characters for a name
    char fname[25];
    char lname[25];

    //get the users name
    cout <<  "Enter First Name,:";
    cin >> fname;
    cout <<  "Enter Last Name:";
    cin >> lname;

    //use the name, writing it to the screen
    cout << "Welcome to the world of c++ "
        << fname << " - " << lname << " \n";
}
    
//<<" Enter your 1st Name:"  << fname << "\n Enter your last Name" << lname << "";
    