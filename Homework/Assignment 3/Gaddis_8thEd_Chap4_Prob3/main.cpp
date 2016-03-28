
/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Magic Dates
 * Created on March 26, 2016, 9:23 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    unsigned int month, day, year;
    
    //Prompt user for input
    cout << "Please enter a month (in numeric form), a day, and a two-digit "
            "year." << endl;
    cin >> month;
    cout << endl;
    cin >> day;
    cout << endl;
    cin >> year;
    cout << endl;
    
    if (month * day == year)
        cout << "Congragulations! That's a magic date!";
    else 
        cout << "Sorry... That date is not magic.";
    
    
    return 0;
}

