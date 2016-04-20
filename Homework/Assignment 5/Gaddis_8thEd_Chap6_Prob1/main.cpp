/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Markup
 * Created on April 20, 2016, 10:03 AM
 */

#include <iostream>

void calculateRetail(float, float);

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float whole;//wholesale price
    float markup;//markup percentage
    
    //Prompt user for input
    cout<<"Please enter the wholesale price of an item: $";
    cin>>whole;
    cout<<"Please enter the markup percentage: %";
    cin>>markup;
    
    if(whole<0)
        cout<<"Error!";
    else if(markup<0)
        cout<<"Error!";
    
    else{
    //Pass values
    calculateRetail(whole, markup);
    }
    
    return 0;
}

void calculateRetail(float whole, float markup){
    float retail;//retail price
    float cMark; //converted markup percentage into decimal
    
    //Convert markup
    cMark = markup * 0.01;
    
    //Calculate retail price
    retail = cMark*whole+whole;
    
    //Output results
    cout<<"Retail price is: $"<<retail;
}