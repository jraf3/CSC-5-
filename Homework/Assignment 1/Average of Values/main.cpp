/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 *
 * Created on February 26, 2016, 5:20 P.M.
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
    
    unsigned int num1 = 28, num2 = 32, num3 = 37, num4 = 24, num5 = 33;
    unsigned int sum;        //sum = sum of 5 numbers
    unsigned int average;  //average = average of 5 numbers
    
    //Initialize Variables   
    
    sum = num1 + num2 + num3 + num4 + num5;
    average = sum / 5;
    
    //Output the results
    
    cout <<"The average of 28, 32, 37, 24, 33 is: " << average <<endl;
    
    return 0;
}

