/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Population
 * Created on April 4, 2016, 9:40 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float sPop = 0; //holds population amount
    float pop; //Population size
    float inc; //Population increase rate
    float conv; //Holds converted percentage
    float iRate; //holds increase rate
    unsigned int sDay = 0; //starting day
    unsigned int day; //Number of days multiplying
    
    //Prompt user for input
    cout << "Starting number of organisms (number cannot be less than 2): ";
    cin >> pop; 
    cout << endl;
    cout << "Average daily population increase (as a percentage): ";
    cin >> inc;
    cout << endl;
    cout << "Number of days they will multiply: ";
    cin >> day;
    cout << endl << endl;
    
    if (!(pop<2 || inc<0 || day <1)){
    //Convert percentage into decimal percentage
    conv = inc * 0.01;
    
    //Loop
    while (sDay <= day){
        cout << "Day " << sDay << " - Population size: " << pop << endl;
        sDay++;
        iRate = conv * pop;
        pop+=iRate;
    }
    }
    else
        cout << "Error!";
    
    return 0;
}

