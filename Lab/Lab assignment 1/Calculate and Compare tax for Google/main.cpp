/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Created on March 2, 2016, 10:11 AM
 * This progaram will calculate how much money Google could save if they moved-
 * to Ireland
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare variables
    float usTax = 0.4;       //usTax = United States Corp Tax
    float ireTax = 0.125;     //ireTax = Ireland Tax
    float google = 74.54e9; //google = Googles' revenue for 2015
    
    //Variables that need to be found
    float gUS;               //gUS = How much Google was taxed in the US
    float gIRE;              //gIRE = How much Google would get taxed in Ireland
    float save;              //save = How much Google can save
    
    //Initialize Variables
    gUS = google * usTax;   
    gIRE = google * ireTax;
    
    //Equation to find how much Google can save with Ireland taxes
    save = gUS - gIRE;
    
    //Output
    cout << setprecision (2) << fixed;
    cout << "Google can save $" << setw(8)<< save 
         << " if they moved to Ireland" << endl;

    return 0;
}

