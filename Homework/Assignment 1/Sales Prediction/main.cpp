/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 *
 * Created on February 26, 2016, 4:45 P.M.
 * Purpose: Calculates the percentage the East Coast sales division generates
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
    
    unsigned int sales = 8600000;  //sales = total sales
    unsigned int percent;          // percent = 58%
    
    //Initialize Variables
     
    percent = sales * 0.58;
       
    //Output the results
    
    cout << "East Coast sales division will generate " << percent 
         << " dollars. " << endl;
    
    return 0;
}

