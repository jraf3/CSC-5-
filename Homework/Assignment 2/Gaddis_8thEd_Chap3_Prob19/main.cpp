/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Created on March 7, 2016, 9:42 AM
 * Purpose: Calculate Monthly payment
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    //Declare variables
    unsigned int loan = 10000;  //loan = loan amount
    float rate = 0.01;          //rate - interest rate
    unsigned int NumP = 36;     //NumP = number of monthly payments
    
    float monthly;              //monthly = monthly payments
    
    //temporary variable for power function
    float temp = pow((1 + rate), NumP);
    
    //loan check
    float loanC;
    
    //Calculate
    monthly = (rate * temp * loan) / (temp - 1);
    
    loanC = (monthly * (temp - 1)) / (rate * temp);
    
    //output results
    cout << "Your Loan Amount: $10,000" << endl;
    cout << "Your Interest Rate: %1 per month" << endl;
    cout << "Your Total Number of Monthly payments: 36" << endl;
    cout << setprecision(2) << fixed;
    cout << "Your Monthly Payments Are: " << setw(7) << monthly << endl;
    cout << "Loan Check: " << loanC;
    
    return 0;
}

