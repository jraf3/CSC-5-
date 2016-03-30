/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Ocean levels
 * Created on March 30, 2016, 9:50 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float ocean = 1.5;
    unsigned int year = 0;
    unsigned int Fyear = 25;
    
    //While loop - Output - Calculations
    while (year < 25){ //25 year check
        ocean = ocean + 1.5; //increase to ocean level per year
        year++;
        cout << "Year: " << year << " - Ocean level increase: "<< ocean << endl;
    }

    return 0;
}

