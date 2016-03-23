/* 
 * File:   main.cpp
 * Author: John Mar Rafael 
 * Purpose: Independent If's
 * Created on March 23, 2016, 9:35 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    unsigned int grade;
    
    //Prompt user for input
    cout << "Please input your score (0-100). " << endl;
    cin >> grade;
    cout << endl;
    
    //If statements
    if (grade >= 90)
        cout << "You received the letter grade A!" << endl;
    if (grade >=80 && grade < 90)
        cout << "You received the letter grade B!" << endl;
    if (grade >= 70 && grade < 80)
        cout << "You received the letter grade C!" << endl;
    if (grade >= 60 && grade < 70)
        cout << "You received the letter grade D." << endl;
    if (grade < 60)
        cout << "You received the letter grade F." << endl;

   
    return 0;
}

