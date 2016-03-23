/* 
 * File:   main.cpp
 * Author: John Mar Rafael 
 * Purpose: Ternary operator
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
    
    //Ternary Operator
    (grade >=90) ? cout << "You received the letter grade A!":
        (grade >=80) ? cout << "You received the letter grade B!": 
            (grade >=70) ? cout << "You received the letter grade C!": 
                (grade >=60) ? cout << "You received the letter grade D.": 
                    (grade < 60) ? cout << "You received the letter grade F.": cout << "Invalid";

    return 0;
}

