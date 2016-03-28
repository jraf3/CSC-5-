/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Change for a Dollar Game
 * Created on March 27, 2016, 4:13 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    //Amount of quarters, nickeles, dimes, and pennies
    unsigned int quar, nick, dime, pen; 
    
    //Total value of each coin
    unsigned int quarA, nickA, dimeA, penA;
    
    //Total value of coins added together
    unsigned int val;
    
    //Prompt user for input
    cout << "Change for a Dollar Game!" << endl << endl;
    cout << "Please enter a number of coins, if it is equal to a dollar, "
            "you win!" << endl; 
    cout << "Please enter the amount of..." << endl;
    cout <<"Quarters: ";
    cin >> quar;
    cout << endl;
    cout << "Dimes: ";
    cin >> dime;
    cout << endl;
    cout << "Nickels: ";
    cin >> nick;
    cout << endl;
    cout << "Pennies: ";
    cin >> pen;
    cout << endl;
    
    //Calculations
    quarA = quar * 25;
    dimeA = dime * 10;
    nickA = nick * 5;
    penA = pen * 1;
    
    val = quarA + dimeA + nickA + penA;
    
    //If statements - Output
    if (val == 100)
        cout << "Congradulations! You won the game!";
    else if (val > 100)
        cout << "The amount you entered is more than one dollar.";
    else if (val < 100)
        cout << "The amount you entered is less than one dollar.";
    
    return 0;
}

