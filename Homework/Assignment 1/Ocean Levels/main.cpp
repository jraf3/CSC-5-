/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 *
 * Created on February 26, 2016, 5:40 P.M.
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
    
    float rise = 1.5; //rise = millimeters ocean level rises per year
    float five;       //five = 5 years of rise
    float seven;      //seven = 7 years of rise
    float ten;        //ten = 10 years of rise
    
    //Initialize Variables   
    
    five = 5 * rise;
    seven = 7 * rise;
    ten = 10 * rise;
    
    //Output the results
    
    cout <<"Ocean level will increase by " << five 
         << " millimeters after 5 years" <<endl;
    
    cout <<"Ocean level will increase by " << seven
         << " millimeters after 7 years" <<endl;
    
    cout <<"Ocean level will increase by " << ten 
         << " millimeters after 10 years" <<endl;
    
    return 0;
}

