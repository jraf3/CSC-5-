
/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Body Mass Index
 * Created on March 26, 2016, 9:55 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    unsigned int weight, height;
    float BMI;
    
    //Holds weight * 703
    float temp1;
    
    //Holds height ^ 2
    float temp2;
    
    //Prompt user for input
    cout<<"This program will calculate your Body Mass Index (BMI) to determine"
            " if you are underweight, overweight, or at optimal weight."<<endl;
    cout << "Please enter your weight in pounds: ";
    cin >> weight;
    cout << "Please enter your height in inches: ";
    cin >> height;
    
    //Calculations
    temp1 = weight * 703;
    temp2 = height * height;
    BMI = temp1 / temp2;
    
    //If statements - Output
    if (BMI >= 18.5 && BMI <= 25){
        cout << "Congradulations! You are at optimal weight!" << endl;
    }
    else if(BMI < 18.5){
            cout << "Sorry, you are underweight." << endl;
    }
    else if (BMI > 25){
            cout << "Sorry, you are overweight." << endl;
    }
    
    return 0;
}

