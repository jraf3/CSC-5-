/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Pennies for pay
 * Created on April 3, 2016, 3:20 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float pen = 0.01; //salary rate
    float total = 0; //total pay
    unsigned int day = 0; //starting day
    unsigned int Wday; //days worked
    
    //Prompt user for input
    cout << "Your starting salary is 1 penny a day but doubles each day." 
            << endl;
    cout << "How many days did you work? ";
    cin >> Wday;
    cout << endl;
    
    //Loop, calculations, and output
    while (day < Wday){
        cout << setprecision(2) << fixed;
        cout << "Day " << Wday << " salary: $" << setw(2) << pen << endl;
        total = pen + total;
        pen = pen * 2;
        day++;
    }
    
    //Output total
    cout << "Total pay at the end of period: $" << setw(2) << total;
    
    
    return 0;
}

