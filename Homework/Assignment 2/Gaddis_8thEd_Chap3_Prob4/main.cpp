/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Calculates Average rainfall for 3 months
 * Created on March 16, 2016, 5:23 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    string month1, month2, month3; //Months input
    float rain1, rain2, rain3;   //Rain per month
    
    float rainavg;               //rainavg = average of rain fall for 3 months
    
    //prompt user for input
    cout << "Please enter 3 months you would "
            "like to calculate the average of rainfall." << endl << endl;
    
    cout << "Month 1: ";
    cin >> month1;
    cout << endl;
    cout << "Month 2: ";
    cin >> month2;
    cout << endl;
    cout << "Month 3: ";
    cin >> month3;
    cout << endl;
    
    cout << "Please enter the amount of rainfall (in inches) "
            "per month." << endl << endl;
    
    cout << "Month 1: " << endl;
    cin >> rain1;
    cout << "Month 2: " << endl;
    cin >> rain2;
    cout << "Month 3: " << endl;
    cin >> rain3;
    
    //Calculations
    rainavg = (rain1 + rain2 + rain3) / 3;
            
    //Output
    cout << setprecision(2) << fixed;
    cout << "The average rainfall for " << month1 << ", " 
         << month2 << ", and " << month3 << " is " << setw(6) << rainavg 
         << " inches." << endl;
    
    
    return 0;
}

