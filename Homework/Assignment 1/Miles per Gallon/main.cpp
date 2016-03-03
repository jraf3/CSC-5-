/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 *
 * Created on February 26, 2016, 6:07 P.M.
 * Purpose: Calculates a Cars' MPG
 */

//system libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int milesD = 375; //milesD = miles driven
    unsigned int gallons = 15; //gallons = gallons of gas used
    unsigned int MPG;          //MPG = miles per gallon
    
    //Initialize Variables   
    MPG = milesD / gallons;
    
    //Output the results
    cout <<"MPG of a car that can travel 375 miles with 15 gallons of gas: " 
         << MPG << " MPG" <<endl;          
    
    return 0;
}

