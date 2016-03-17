/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Calculates how widgets are on a pallet
 * Created on March 16, 2016, 7:00 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float widget = 12.5;
    float pallet;
    float palwid; //pallet weight with widgets on top
    float Twidget; //total widgets on pallet
    float temp;    //Holds weight of widgets without pallet
    
    //State program purpose
    cout << "This program will calculate how many widgets are on a pallet based "
            "on widgets weighing 12.5 pounds and how much your pallet weighs.";
    cout << endl << endl;
    
    //Prompt User For Input
    cout << "Please enter how much the pallet weighs (in pounds)"
            " with widgets on top: ";
    cout << endl;
    cin >> palwid;
    cout << endl << endl; 
    
    cout << "Please enter how much the pallet alone weighs (in pounds).";
    cout << endl;
    cin >> pallet;
    cout << endl << endl;
    
    //Calculations
    temp = palwid - pallet;
    Twidget = temp / widget;
    
    //Output 
    cout << "Total amount of Widgets on pallet: " << Twidget << endl;

    return 0;
}

