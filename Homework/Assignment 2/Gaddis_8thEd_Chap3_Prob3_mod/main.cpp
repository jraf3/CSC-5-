/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Created on March 9, 2016, 10:10 AM
 * Purpose:
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare variables
    const float F1 = 32;
    const float F2 = 212;
    const float C1 = 0;
    const float C2 = 100;
    unsigned int F;
    float C;
    
    //Calculated variables
    float m = 5.0f/9.0f;
    float b = m * F1;
    
    //Input
    cout << "What degree F would you like to convert to degree C?" << endl;
    cin >> F;
    cout << endl;
    
    //Calculate
    C = C1 + (C2-C1) * ((F - F1) / (F2 - F1));
    //Output
    cout << F << " degree F is: " << C << " degree C" << endl;        
            
    return 0;
}

