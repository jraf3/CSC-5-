/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 *
 * Created on February 26, 2016, 5:30 P.M.
 * Purpose: Our First Program
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
    
    unsigned int payA = 2200;   //payA = pay amount
    unsigned int payP = 26;     //payP = pay periods
    unsigned int annualP;       //annualP = annual pay
    
    //Initialize Variables   
    
    annualP = payA * payP;          
    
    //Output the results
    
    cout <<"Total annual pay: $" << annualP <<endl;
    
    return 0;
}

