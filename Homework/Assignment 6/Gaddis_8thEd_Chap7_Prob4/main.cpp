/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Larger Than n
 * Created on May 9, 2016, 10:29 AM
 */

#include <iostream>

using namespace std;

void display(int[], int, int);

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 6;
    int value[SIZE] = {5, 10, 15, 20, 25, 30};
    int n = 17;

    display(value, SIZE, n);

    return 0;
}

void display(int value[], int SIZE, int n) {
    for (int index = 0; index < SIZE; index++) {
        if (value[index] < n)
            cout << value[index] << " ";
    }
    cout << endl;
}
