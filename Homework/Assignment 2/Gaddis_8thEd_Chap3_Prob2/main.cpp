/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 *Purpose: Softball game tickets (set precision)
 * Created on March 16, 2016, 4:00 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float ClassA = 15;
    float ClassB = 12;
    float ClassC = 9;
    
    float tikA;
    float tikB;
    float tikC;
    
    float costA;
    float costB;
    float costC;
    
    float sales;
    
    //Display Ticket Prices
    cout << "Class A tickets: $15" << endl;
    cout << "Class B tickets: $12" << endl;
    cout << "Class C tickets: $9" << endl;     

    //Prompt user for input
    cout << "How many Class A tickets were sold? ";
    cin >> tikA;
    cout << endl;
    
    cout << "How many Class B tickets were sold? ";
    cin >> tikB;
    cout << endl;
    
    cout << "How many Class C tickets were sold? ";
    cin >> tikC;
    cout << endl;
    
    //Calculation
    costA = tikA * ClassA;
    costB = tikB * ClassB;
    costC = tikC * ClassC;
    
    sales = costA + costB + costC;
    
    //Output
    cout << setprecision(2) << fixed;
    cout << "Total Sales: " << setw(6) << sales << endl;
    
    return 0;
}

