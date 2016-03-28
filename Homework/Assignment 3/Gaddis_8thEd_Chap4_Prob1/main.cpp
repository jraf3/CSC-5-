
/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Minimum/Maximum
 * Created on March 26, 2016, 8:56 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    float num1, num2;
    
    //Prompt user for input
    cout << "This program will take two numbers of your choice and determines"
            " which one is smaller and which is the larger." << endl << endl;
    cout << "Please enter two numbers: " << endl;
    cin >> num1;
    cout << endl;
    cin >> num2;
    cout << endl;
    
    //If statements
    if (num1 > num2){
        cout << "Larger number is: " << num1 << endl
             << "Smaller number is: " << num2 << endl;
    }
    else if (num1 < num2){
        cout << "Larger number is: " << num2 << endl
             << "Smaller number is: " << num1 << endl;
    }
    else if (num1 = num2){
        cout << "Numbers are equal!" << endl;
    
    
    }
    return 0;
}

