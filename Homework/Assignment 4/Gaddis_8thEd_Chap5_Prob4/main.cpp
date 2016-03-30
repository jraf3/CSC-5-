/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Calories Burned
 * Created on March 30, 2016, 10:00 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float Cal = 18; //Calories burned every 5 min
    unsigned int min = 5;  //5 min
    unsigned int Fmin = 30; //30 min
    
    //while loop - Output - Calculations
    while (min<Fmin){
        Cal = Cal + 18;
        cout << "Calories burned after " << min << " minutes: " << Cal << endl;
        min = min + 5;
    }

    return 0;
}

