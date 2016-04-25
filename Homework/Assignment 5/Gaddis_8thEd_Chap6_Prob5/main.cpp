/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Falling Distance
 * Created on April 25, 2016, 10:09 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */

//Function Prototypes
float fallingDistance(float);

int main(int argc, char** argv) {
    //Declare Variables
    float dist;
    float t; //seconds object has been falling
    
    //Prompt user input
    cout<<"Please enter amount of time object has fallen (in seconds): ";
    cin>>t;
    
    //Pass to fallingDistance
    dist=fallingDistance(t);

    //Output results
    cout<<"The object has fallen "<<dist<<" Meters"<<endl;
    
    //loop
    for(int i=1; i<11; i++){
        cout<<"Distance fallen after "<<i<<" Sec: "<<fallingDistance(i)
            <<" Meters"<<endl;
    }
    
    return 0;
}

float fallingDistance(float t){
    //Declare Variables
    float d;//distance in meters
    float g=9.8;//gravity
    
    //Calculation
    d = (0.5) * g * (t*t);
    
    return d;
}
