/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Mass and Weight
 * Created on March 27, 2016, 3:43 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    float mass, weight;
    
    //Prompt user for input
    cout << "Please enter the object's mass (in kilograms): ";
    cin >> mass;
    cout << endl;
    
    //Calculation
    weight = mass * 9.8;
      
    //If statements - Output
    if (weight > 1000)
        cout << "Object is too heavy." << endl;
    else if (weight < 10)
        cout << "Object is too light." << endl;
    else if (weight <= 1000 && weight >= 10)
        cout << "Object weight is fine." << endl;

    return 0;
}

