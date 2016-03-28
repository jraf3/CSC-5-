/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Time Calculator
 * Created on March 27, 2016, 3:53 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    unsigned int sec;
    float conv;  //Converted minutes, hours, or days
    
    //Prompt user for input
    cout << "Please enter a number of seconds to convert into minutes, or "
            "hours, or days. " << endl;
    cin >> sec;
    
    //If statements - Output
    if (sec >= 86400){
        conv = sec / 86400;
        cout << sec << " converted into days is " << conv << " day(s)!"
             << endl;
    }
    else if (sec >= 3600){
        conv = sec / 3600;
        cout << sec << " converted into hours is " << conv << " hour(s)!" 
             << endl;
    }
    else if (sec >= 60){
        conv = sec / 60;
        cout << sec << " converted into minutes is " << conv << " minute(s)!" 
             << endl;       
    }
    return 0;
}

