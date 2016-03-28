
/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Roman Numeral Converter
 * Created on March 26, 2016, 9:08 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    int num;
    
    //Prompt user for input
    cout << "This program will convert a number from 1-10 into a Roman Numeral";
    cout << endl;
    cout << "Please enter a number between 1-10: " << endl;
    
    cin >> num;
    
    //Switch statement
    switch (num == 1){
        case true: cout << "1 in Roman Numeral form is: I"; break;
    }
    switch (num == 2){
        case true: cout << "2 in Roman Numeral form is: II"; break;
    }
    switch (num == 3){
        case true: cout << "3 in Roman Numeral form is: III"; break;
    }
    switch (num == 4){
        case true: cout << "4 in Roman Numeral form is: IV"; break;
    }
    switch (num == 5){
        case true: cout << "5 in Roman Numeral form is: V"; break;
    }
    switch (num == 6){
        case true: cout << "6 in Roman Numeral form is: VI"; break;
    }
    switch (num == 7){
        case true: cout << "7 in Roman Numeral form is: VII"; break;
    }
    switch (num == 8){
        case true: cout << "8 in Roman Numeral form is: VII"; break;
    }
    switch (num == 9){
        case true: cout << "9 in Roman Numeral form is: IX"; break;
    }
    switch (num == 10){
        case true: cout << "10 in Roman Numeral form is: X"; break;
    }
    switch (num < 1 || num > 10){
        case true: cout << "Number input is NOT between 1-10."; break;
    }
 
    return 0;
}

