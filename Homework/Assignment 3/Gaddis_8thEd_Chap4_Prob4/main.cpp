
/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Areas of Rectangles
 * Created on March 26, 2016, 9:35 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    float length1, length2;
    float width1, width2;
    
    //Areas of rectangle 1 and 2
    float rect1;
    float rect2;
    
    //Prompt user for input
    cout <<"This program will take the area of two rectangles and output which"
           " rectangle has a larger area or if the areas are the same." << endl;
    
    cout << "Please enter the length and width of the first rectangle." <<endl;
    cin >> length1;
    cout << endl;
    cin >> width1;
    cout << endl;
    
    cout << "Please enter the length and width of the second rectangle." <<endl;
    cin >> length2;
    cout << endl;
    cin >> width2;
    cout << endl;
    
    //Calculations
    rect1 = length1 * width1;
    rect2 = length2 * width2;
    
    //If Statements - Output
    if (rect1 > rect2)
        cout << "Rectangle 1 has the greater area!" << endl;
    else if (rect1 < rect2)
        cout << "Rectangle 2 has the greater area!" << endl;
    else if (rect1 == rect2)
        cout << "Rectangles have the same area!" << endl;
    
    return 0;
}

