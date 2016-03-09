/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Created on March 9, 2016, 9:02 AM
 * Purpose: calculate new salary and backpay
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    string ans;
    cout << "Would you like to calculate your new salary? (yes or no)" << endl;
    cin >> ans;
    
    if (ans == "yes")
    {
    //Declare variables
    float oSalary;
    float omSalary;
    const float PercInc = 0.076;
    float nSalary;
    float nmSalary;
    float backpay;
    int temp;
    int month;
    
    //Input
    cout << "What is your current annual salary?" << endl;
    cin >> oSalary;
    cout << "How many months did you work with your old salary?" << endl;
    cin >> temp;
    cout << endl;
    
    //Calculate
    omSalary = oSalary / 12;
    nSalary = oSalary * (1+PercInc);
    nmSalary = nSalary / 12;  
    month = 12/temp;
    backpay = (nSalary-oSalary) / month;
            
    //Output results
    cout << "Your old annual salary is: " << oSalary<< endl;
    cout << "Your old monthly salary is: " << omSalary << endl;
    cout << "Your new monthly salary is: " << nmSalary << endl;
    cout << "Your new annual salary is: " << nSalary << endl;
    cout << "Your backpay is: " << backpay << endl;
    
    }
    else {
    cout << "Have a nice day!" << endl;   
    }
    
    return 0;
}

