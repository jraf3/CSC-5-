/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 *
 * Created on February 26, 2016, 4:55 P.M.
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
    
    float state;           //state = total state sales tax
    float country;         //country = total country sales tax
    unsined int purch = 95;      //purch = total purchase
    float total;           //total = total tax
    
    //Initialize Variables
    
    state = purch * 0.04;    //0.04 = %4 state sales tax
    country = purch * 0.02;  //0.02 = %2 country sales tax
            
    total = state + country;    

    //Output the results
    
    cout << "Total Sales Tax for $95 purchase: $" << total <<endl;
    
    return 0;
}

