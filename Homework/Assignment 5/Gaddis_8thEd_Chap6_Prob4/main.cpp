/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Safest Driving Area
 * Created on April 20, 2016, 10:03 AM
 */

#include <iostream>

int getNumAccidents(string);
void findLowest();

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    string region;
    
    //Prompt user for input
    cout<<"Please enter a region (North, South, East, West, or Central): ";
    cin>>region;
    
    //getNumAccidents function
    getNumAccidents(string);
    
    
    return 0;
}


int getNumAccidents(string regionA){
    unsigned int acdt;
    
    //Prompt for input
    cout<<"How many automobile accidents were reported in this region during "
            "last year? ";
    cin>>acdt;
    
    //pass to findlowest
    findLowest(acdt);
    
    return acdt;
}


void findLowest(unsigned int acdt){
    
}