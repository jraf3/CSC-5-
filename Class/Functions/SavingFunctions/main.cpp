/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose:  To Illustrate rule of 72 by way of a while loop
 * Modified:   April, 25 2016
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float save1(float,float,int);//Calling pow
float save2(float,float,int);//Calling exp then calling log
float save3(float,float,int);//For-Loop
float save4(float,float,int);//Calling itself, recursion
float save5(float,float,int=9);//Defaulted parameter
float save1(float,float,float);//Over-riding, same name different parameter types
int   save6(float &,float,float,int);//Pass by reference and static variable

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float pv=100.0f;//Present value
    float iRate=0.08f;//Interest rate
    float nComp=9;//Number of compounding periods by rule of 72
    

    //Output the initial conditions and results
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    cout<<"Number of Compounding periods = "<<nComp<<" years"<<endl;
    
    
    //Output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Future Value = $"<<save1(pv,iRate,nComp)<<endl;
    cout<<"The Future Value = $"<<save2(pv,iRate,nComp)<<endl;
    cout<<"The Future Value = $"<<save3(pv,iRate,nComp)<<endl;
    cout<<"The Future Value = $"<<save4(pv,iRate,nComp)<<endl;
    cout<<"The Future Value = $"<<save5(pv,iRate)<<endl;
    cout<<"The Future Value = $"<<save1(pv,iRate,static_cast<float>(nComp))<<endl;
    float fv;
    save6(fv,pv,iRate,nComp);
    save6(fv,pv,iRate,nComp);
    cout<<"The Future Value = $"<<fv<<endl;
    cout<<"Number of times save 6 was called = "<<save6(fv,pv,iRate,nComp)<<endl;
    
    
    //Exit stage right
    return 0;
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
int save6(float &fv,float p,float i,int n){
    //Declare variables
    static int count=0;
    fv=p;
    //Loop on the number 
    for(int years=1;years<=n;years++){
        fv*=(1+i);
    }
    //Return how many times the function has been called
    return ++count;
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save1(float p,float i,float n){
    return p*pow(1+i,n);
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save5(float p,float i,int n){
    //Declare variables
    if(n<1)return p;
    //Loop on the number 
    return save4(p,i,n-1)*(1+i);
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save4(float p,float i,int n){
    //Declare variables
    if(n<1)return p;
    //Loop on the number 
    return save4(p,i,n-1)*(1+i);
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save3(float p,float i,int n){
    //Declare variables
    float fv=p;
    //Loop on the number 
    for(int years=1;years<=n;years++){
        fv*=(1+i);
    }
    return fv;
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save1(float p,float i,int n){
    return p*pow(1+i,n);
}