/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Created on March 2, 2016, 9:56 AM
 * This program calculates the budget for NASA and the Military
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare variables
    float fed = 3.8e12;   //fed = federal budget
    float milB = 601e9f;  //milB = military budget
    float nasa = 19.3e9f; //nasa = nasa budget
    
    //percent of nasa and military budget
    float milP;
    float nasaP;
    
    //Initialize variables
    milP = milB / fed * 100;
    nasaP = nasa / fed * 100;
    
    //Output calculations
    cout << "Total US Military budget for 2015: " << milP << "%" << endl;
    cout << "Total NASA budget for 2015: " << nasaP << "%" << endl;

    
    return 0;
}

