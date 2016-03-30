/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Membership Fees Increase
 * Created on March 30, 2016, 10:14 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float member = 2500; //$2,500 per year
    float mInc = 0.04;   //Member ship increase 4% per year
    float dInc; //4% of $2,500
    unsigned int Year = 0;
    unsigned int sYear = 6; //6 Years of membership

    //Calculate 4% of $2,500
    dInc = 2500 * 0.04;
    
    //Output starting cost
    cout << "Current membership cost: " << member << endl << endl;
    cout << "Membership will increase %4 per year" << endl << endl;
    
    //while loop - Output - Calculations
    while (Year <= sYear){
        member = member + dInc;
        Year++;
        cout << "After " << Year << " year," 
             << " membership will cost: " << member << endl;;
    }
    return 0;
}

