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
    for (int index = 0; index < SIZE; index++) {
        cout << "Jars of " << salsa[index] << " sold: ";
        cin >> jars[index];
    }

    //Calculations for highest and lowest
    unsigned int highest;
    unsigned int lowest;

    int posHigh;
    int posLow;

    for (int index = 0; index < SIZE; index++) {
        if (jars[index] > highest) {
            highest = jars[index];
            posHigh = index;
        }
    }

    for (int index = 0; index < SIZE; index++) {
        if (jars[index] < lowest) {
            lowest = jars[index];
            posLow = index;
        }
    }
    cout << endl << endl;

    //Output results
    for (int index = 0; index < SIZE; index++) {
        cout << "Sales for " << salsa[index] << " salsa: " << jars[index] << endl;
    }

    cout << endl;

    //sum of jars
    int sum = 0;
    for (int index = 0; index < SIZE; index++) {
        sum += jars[index];
    }

    cout << "Total amount of jars sold: " << sum << endl;
    cout << salsa[posHigh] << " salsa sold the most amount of jars!" << endl;
    cout << salsa[posLow] << " salsa sold the least amount of jars..." << endl;

    return 0;
}
