/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Sum of Numbers
 * Created on March 28, 2016, 10:30 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    int i=0;
    
    //Display
    cout << "ASCII codes for 0-127" << endl << endl;
    
    //Loop
    for (i=0; i<127; i++){
          cout << static_cast<char>(i) << ' '; //outputs ASCII codes and spaces
          if ((i+1)%16==0) //checks if character is divisible by 16
          cout << endl;    //starts new line if previous line is true
       
    }
    return 0;
}

