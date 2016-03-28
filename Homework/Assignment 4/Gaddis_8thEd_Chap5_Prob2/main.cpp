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
    while (i<=127){
        cout << static_cast<char>(i) << endl;
        i++;
    }
    
    // 1-10
    // for(int i=0; i<10; i++)
    // if( (i+1)%16==0  ) cout << endl;
    // 1 2 3 4 5
    // 6 7 8 9 10
    return 0;
}

