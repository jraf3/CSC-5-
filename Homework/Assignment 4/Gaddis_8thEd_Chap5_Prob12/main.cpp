/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Celsius to Fahrenheit Table
 * Created on April 3, 2016, 3:40 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int cel = 0; //Starting celsius
    float fahr = 32; //Starting Fahrenheit
    
    //Loop, Calculations and Output
    while (cel <= 20){
        cout << cel << " degrees Celsius = " 
             << fahr << " degrees Fahrenheit" << endl;
        cel++;
        fahr = fahr + 1.8; //every 1 degree celsius is 1.8 degrees fahrenhet
    }
    return 0;
}

