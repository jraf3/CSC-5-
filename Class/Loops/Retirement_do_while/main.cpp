/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose:
 * Created on March 30, 2016, 8:39 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    float salary=6e4f; //$60,000
    float percDep=1e-1f; //10% to save each year
    float pv=0.0f; //Present value
    float iRate=0.05f; //Interest rate
    int nYears=0; //Comparison of calculation to the rule of 72
    float fv=pv; //Future value
    float yrlyDep; //Yearly deposit in $'s
    float savRet; //Savings to retire in $'s
    
    //Calculate the approximate savings required to retire and yearly Deposit
    savRet=salary/iRate;
    yrlyDep =salary*percDep;
    
    //Output the initial conditions and setup the table
    cout<<"Present value = $"<<savRet<<endl;
    cout<<"Yearly Deposit/Municipal Bond Purchase = $"<<yrlyDep<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    cout<<"Years Future Value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(7)<<" $"<<fv<<endl;
    
    //Loop each year until the future value is 2x the present value
    do{
        fv*=(1+iRate);//Yearly interest rate calculation
        fv+=yrlyDep;
        nYears++;
        cout<<setw(3)<<nYears<<setw(7)<<" $"<<fv<<endl;
    }while (fv<savRet);

    //Output the results
//    cout<<"By the Rule of 72 it will take "<<nComp<<" years to double"<<endl;
//    cout<<"The Future Value = $"<<fv<<endl;
//    cout<<"The number of years to more than double = "<<nYears<<endl;
    
    //Exit stage right

    return 0;
}

