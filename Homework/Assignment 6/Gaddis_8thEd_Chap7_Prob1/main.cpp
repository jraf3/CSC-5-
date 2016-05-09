/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Largest/Smallest Array Values
 * Created on May 9, 2016, 10:09 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10;
    int num[SIZE];
    
    //stores maximum and smallest numbers
    int max;
    int low;
    
    //Prompt user input
    cout<<"Enter 10 numbers: "<< endl;
    
    //Loop for 10 numbers
    for(int count=0; count<SIZE; count++)
        cin>>num[count];

    max = num[0];
    low = num[0];
    
    for(int i=1; i<SIZE; i++){
        if (num[i]>max)
            max=num[i];
        if (num[i]<low)
            low=num[i];
    }
    
    cout<<"Largest number: "<<max<<endl;
    cout<<"Smallest number: "<<low;
    
    return 0;
}

