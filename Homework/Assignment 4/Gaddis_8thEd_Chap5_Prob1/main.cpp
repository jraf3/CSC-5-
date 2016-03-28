/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Sum of Numbers
 * Created on March 28, 2016, 9:57 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    unsigned int num;//Number cannot be a negative number
    unsigned int start=1; //starting number
    unsigned int sum = 0; //Sum of 1 up to the number entered
    
    //Prompt user for input
    cout << "Sum of Numbers" << endl;
    cout << "This program will take a number entered by you and get the sum of "
            "all the integers from 1 up to the number entered." << endl;
    cout << "(The number must be a  positive number)" << endl;
    cout << "Please enter a number: ";
    cin >> num;
    
    //Loop
    while (start<=num){
        sum += start++;
    }
    cout << "Sum of integers from 1 up to the number entered is: " << sum << endl;
        
    
    
    

    return 0;
}

