/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Rainfall Statistics
 * Created on May 9, 2016, 10:29 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 12;
    float rain[SIZE];

    float total = 0; //total rainfall for the year
    float average = 0; //average monthly rainfall
    float highest; //month with highest amount of rainfall
    float lowest; //month with lowest amount of rainfall

    //Prompt user input
    cout << "Please enter amount of rainfall for the year (in inches)... " << endl;
    cout << "January: ";
    cin >> rain[0];
    cout << "February: ";
    cin >> rain[1];
    cout << "March: ";
    cin >> rain[2];
    cout << "April: ";
    cin >> rain[3];
    cout << "May: ";
    cin >> rain[4];
    cout << "June: ";
    cin >> rain[5];
    cout << "July: ";
    cin >> rain[6];
    cout << "August: ";
    cin >> rain[7];
    cout << "September: ";
    cin >> rain[8];
    cout << "October: ";
    cin >> rain[9];
    cout << "November: ";
    cin >> rain[10];
    cout << "December: ";
    cin >> rain[11];



    //Calculations
    int num;
    //Finding total rainfall
    for (num = 0; num < SIZE; num++)
        total += rain[num];

    //average rainfall
    average = total / SIZE;

    //highest amount of rainfall
    int count;
    highest = rain[0];
    for (count = 1; count < SIZE; count++) {
        if (rain[count] > highest)
            highest = rain[count];
    }

    //lowest amount of rainfall
    int cnt;
    lowest = rain[0];
    for (cnt = 1; cnt < SIZE; cnt++) {
        if (rain[cnt] < lowest)
            lowest = rain[cnt];
    }

    cout << "Total Rainfall: " << total << endl;
    cout << "Average rainfall: " << average << endl;
    cout << "Largest number: " << highest << endl;
    cout << "Smallest number: " << lowest << endl;

    return 0;
}

