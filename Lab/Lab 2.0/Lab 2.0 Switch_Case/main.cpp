/* 
 * File:   main.cpp
 * Author: John Mar Rafael 
 * Purpose: Switch/Case
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
    
    // switch
    switch(grade < 60){
        case true:cout << "You received the letter grade F."; break;
    }
    switch(grade >= 60 && grade < 70){
        case true:cout << "You received the letter grade D."; break;
    }
    switch(grade >= 70 && grade < 80){
        case true:cout << "You received the letter grade C!"; break;
    }
    switch(grade >= 80 && grade < 90){
        case true:cout << "You received the letter grade B!"; break;
    }
    switch(grade >= 90){
        case true:cout << "You received the letter grade A!"; break;  
    }
             
    

   
    return 0;
}

