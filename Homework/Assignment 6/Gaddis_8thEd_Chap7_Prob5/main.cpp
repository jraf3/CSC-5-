/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Monkey Business
 * Created on May 18, 2016, 9:48 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    const int monkey = 3;//amount of monkeys
    const int day = 5;//weekdays
    float food [monkey][day];//3x5 array
    float ate = 0;//holds total lbs of food ate
    float avg = 0;//holds the average of food ate
    int m, d;//loop counters
    
    //intro
    cout<<"This program will calculate the average, least, and greatest "
        <<"amount of food each monkey ate."<<endl;
    cout<<"Please enter the following information..."<<endl;
    
    //Loops for input
    for (m = 0; m<monkey; m++){
        for (d=0;d<day; day++){
            cout <<"Monkey "<< (m+1);
            cout <<", Day "<< (d+1);
            cin >> ate[m][d];
            cout <<" Pounds.";
        }
        cout <<endl;
    }

    
    
    return 0;
}

