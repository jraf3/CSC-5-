/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 *
 * Created on March 16, 2016, 10:06 AM
 */

#include <iostream>
#include <cstring>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int SIZE = 20;
    
    //Declare Variables
    char name1[SIZE], name2[SIZE];
    
    //Input
    cout << "Enter first name: ";
    cin.getline(name1, SIZE);
    cout << endl;
    cout << "Enter second name: ";
    cin.getline(name2, SIZE);
    cout << endl;
   
    //if and strcmp
    if (strcmp (name1, name2)<=0){
        cout << name1 << ", "<< name2;
    }
    else if (strcmp (name1, name2)<=0){
            cout << name2 << ", "<< name1;
    }
    return 0;
}

