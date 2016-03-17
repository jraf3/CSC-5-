/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Calculates a car's gas mileage
 * Created on March 16, 2016, 3:39 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float gas;  //gas = gallons of gas tank can hold
    float tank; // tank = how many miles car can travel on a full tank
    float MPG;         //MPG = miles per gallon
    
    //Prompt for input
    cout << "Please enter the amount of gas (in gallons) your car can hold: ";
    cin >> gas;
    cout << endl;
    
    cout <<"Please enter the amount of miles your "
            "car can travel on a full tank: ";
    cin >> tank;
    cout << endl;
    
    //Calculate
    MPG = tank/gas;
    
    //Output
    cout << "Your car's MPG: " << MPG;
         

    return 0;
}

