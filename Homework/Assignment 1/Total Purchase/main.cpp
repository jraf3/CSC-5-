/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 *
 * Created on February 26, 2016, 5:40 P.M.
 * Purpose: Calculates subtotal, total tax, and total pruchase of 5 items
 */

//system libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    //prices of 5 items being purchased
    float item1 = 15.95;
    float item2 = 24.95;
    float item3 = 6.95;
    float item4 = 12.95;
    float item5 = 3.95;
    
    //sales tax per item
    float tax1;
    float tax2; 
    float tax3;
    float tax4;
    float tax5;
    
    //total sales tax
    float taxT;
    
    //subtotal and total of purchase
    float subT;
    float total;
    
    //Initialize Variables   
    
    //amount of sales tax per item
    tax1 = item1 * 0.07;
    tax2 = item2 * 0.07;
    tax3 = item3 * 0.07;
    tax4 = item4 * 0.07;
    tax5 = item5 * 0.07;
            
    //total sales tax
    taxT = tax1 + tax2 + tax3 + tax4 + tax5; 
    
    //subtotal
    subT = item1 + item2 + item3 + item4 + item5;
    
    //total purchase
    total = subT + taxT;
            
    //Output the results
    
    //output item prices
    cout << "Item 1: $" << item1 << endl;
    cout << "Item 2: $" << item2 << endl;
    cout << "Item 3: $" << item3 << endl;
    cout << "Item 4: $" << item4 << endl;
    cout << "Item 5: $" << item5 << endl;
    cout << endl;
    
    //output subtotal of sale
    cout << "Subtotal of sale: $" << subT << endl;
    cout << endl;
    
    //output amount of sales tax
    cout << "Amount of sales tax: $" << taxT << endl;
    cout << endl;
    
    //output total purchase
    cout << "Total purchase: $" << total << endl;
    
    return 0;
}

