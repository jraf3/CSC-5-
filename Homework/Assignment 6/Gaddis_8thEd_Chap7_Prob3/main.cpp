/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Chips and Salsa
 * Created on May 9, 2016, 10:29 AM
 */

#include <iostream>

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 5;
    string salsa[SIZE] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int jars[SIZE];
    
    //Input jars sold for each type
    for (int index=0; index <SIZE; index++){
        cout <<"Jars of "<< salsa[index]<<" sold: ";
        cin>>jars[index];
    }
    
    //Calculations
    
    //Output results
    cout<<"Jars of salsa sold: ";
    return 0;
}
