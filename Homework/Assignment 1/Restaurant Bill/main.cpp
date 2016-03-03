/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 *
 * Created on February 26, 2016, 4:30 P.M.
 * Purpose: Calculating Amount of Total bill
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
    
    float meal = 88.67; //meal = meal charge
    float tax;          //tax = total tax for meal charge
    float tip;          //tip = total tip for meal charge
    float total;        //total = total bill
    
    //Initialize Variables   
    
    tax = meal * 0.0675; //0.0675 = % of tax
    tip = meal * 0.2;    //0.2 = % of tip
    
    total = meal + tax + tip; //equation for total bill
    
    //Output the results
    
    cout << "Meal Charge: $" << meal << endl;
    cout << "Tax Amount: $" << tax << endl;
    cout << "Tip Amount: $" << tip << endl;
    cout << "Total Bill: $" << total << endl;
    
    return 0;
}

