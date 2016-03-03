/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 *
 * Created on February 26, 2016, 6:15 P.M.
 * Purpose: Finding Distance per Tank of Gas
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
    int gallons = 20;   //gallons = total gallons in one tank of gas
    float MPGt = 23.5;  //MPGt = miles per gallon in town
    float MPGh = 28.9;  //MPGh = miles per gallon on highway
    float disT;         //disT = total distance traveled in town
    float disH;         //disH = total distance traveled on highway
    
    //Initialize Variables   
    disT = gallons * MPGt;
    disH = gallons * MPGh;
    
    //Output the results
    cout <<"A car with a 20-gallon gas tank averages 23.5 MPG when driven "
            "in town and 28.9 MPG when driven on the highway." << endl;
    cout << endl;
    cout << "Total distance car can travel in town: " << disT << " Miles" 
         << endl;
    cout << "Total distance car can travel on highway: " << disH << " Miles" 
         << endl;
    
    return 0;
}

