/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Distance Traveled
 * Created on March 30, 2016, 10:30 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int hour; //Input hours traveled
    unsigned int sHour = 1; //starting hour
    float dist; //distance traveled - MPH
    float hDist; //distance per hour
    
    //Prompt user for input
    cout << "What is the speed of the vehicle in MPH? ";
    cin >> dist;
    cout << endl;
    cout << "How many hours has it traveled? ";
    cin >> hour;
    cout << endl << endl;
    
    //Output Title
    cout << "Hour     Distance Traveled" << endl;
    cout << "---------------------------------" << endl;
    
    //Calculate distance traveled
//    distance = speed * time;
    
    //while loop
    while (hour >= sHour){
        hDist = sHour * dist;
        cout << setprecision(2) << fixed;
        cout << sHour << setw(10) << hDist << endl;
        sHour++;
        
    }
    return 0;
}

