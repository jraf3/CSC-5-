/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Rainfall Statistics
 * Created on May 9, 2016, 10:29 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=12;
    float rain[SIZE];
    
    float total;//total rainfall for the year
    float average;//average monthly rainfall
    float highest;//month with highest amount of rainfall
    float lowest;//month with lowest amount of rainfall
    
    //Prompt user input
    cout<<"Please enter amount of rainfall for the year (in inches)... "<< endl;
    cout<<"January: ";
    cin>>rain[0];
    cout<<"February: ";
    cin>>rain[1];
    cout<<"March: ";
    cin>>rain[2];
    cout<<"April: ";
    cin>>rain[3];
    cout<<"May: ";
    cin>>rain[4];
    cout<<"June: ";
    cin>>rain[5];
    cout<<"July: ";
    cin>>rain[6];
    cout<<"August: ";
    cin>>rain[7];
    cout<<"September: ";
    cin>>rain[8];
    cout<<"October: ";
    cin>>rain[9];
    cout<<"November: ";
    cin>>rain[10];
    cout<<"December: ";
    cin>>rain[11];
    

    
//Calculations
    
    
    cout<<"Largest number: "<<max<<endl;
    cout<<"Smallest number: "<<low;
    
    return 0;
}

