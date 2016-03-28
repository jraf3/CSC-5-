/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Color mixer
 * Created on March 27, 2016, 4:04 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    string color1, color2;
    
    //Prompt user for input
    cout << "Color Mixer!" << endl;
    cout << "Primary Colors: red, blue, yellow" << endl;
    cout << "Please enter 2 primary colors (lowercased) to mix" << endl;
    cin >> color1;
    cout << endl;
    cin >> color2;
    
    //If statements - Output
    if (color1 == "red" && color2 == "blue")
        cout << "When you mix red and blue, you get purple." << endl;
    else if (color1 == "blue" && color2 == "red")
        cout << "When you mix red and blue, you get purple." << endl;
    else if (color1 == "red" && color2 == "yellow")
        cout << "When you mix red and blue, you get orange." << endl;
    else if (color1 == "yellow" && color2 == "red")
        cout << "When you mix red and blue, you get orange." << endl;
    else if (color1 == "blue" && color2 == "yellow")
        cout << "When you mix red and blue, you get green." << endl;
    else if (color1 == "yellow" && color2 == "blue")
        cout << "When you mix red and blue, you get green." << endl;
    else
        cout << "Error!" << endl;
    
    return 0;
}

