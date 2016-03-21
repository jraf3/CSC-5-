/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Finds lottery winnings
 * Created on March 21, 2016, 9:41 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float lump;     //Lump sum penalty  
    float tax;      //Tax penalty
    float equity;   //Marriage Equity
    float inwin;    //initial winnings
    float tWins;    //total winnings
    
    //Prompt user for input
    cout << "This program will calculate how much you will receive given you"
            " win the lottery, after penalties and taxes." << endl;
    cout << "Please input how much money you won: " << endl;
    cin >> inwin;
    cout << endl;
    
    //Calculations
    lump = inwin * 0.62;
    tax = lump * 0.52;
    tWins = lump - tax;
    equity = tWins * 0.5;
    
    //Output
    cout << setprecision(2) << fixed;
    cout << "Your total winnings after taxes and penalties are $" << setw(10) <<
            tWins << endl;
    cout << "If you are married, you receive $" << setw(10) << equity << endl;
    return 0;
}

