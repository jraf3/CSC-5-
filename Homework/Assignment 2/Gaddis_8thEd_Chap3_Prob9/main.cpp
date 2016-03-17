/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Calculates calorie intake
 * Created on March 16, 2016, 7:16 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int ate; //cookies ate
    unsigned int cookie = 30; //1 cookie = 30 calories
    unsigned int cals; //Total calories consumed
    
    //State program purpose
    cout << "This program will calculate how many calories you consumed from "
            "cookies that are approximately 30 calories each. ";
    cout << endl << endl;;
    
    //Prompt for user input
    cout << "Input amount of cookies consumed: ";
    cin >> ate;
    cout << endl;
    
    //Calculate calorie intake
    cals = ate * cookie;
    
    // Output 
    cout << "Based on how many cookies you ate, you consumed " << cals 
         << " calories.";

    return 0;
}

