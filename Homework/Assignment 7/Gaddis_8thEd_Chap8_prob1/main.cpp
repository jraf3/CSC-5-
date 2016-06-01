/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 *
 * Created on June 1, 2016, 8:22 AM
 */

#include <iostream>

using namespace std;

//function prototypes
int searchList(int[], int, int);

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE = 18;
    int accNum[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        10005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int ANum;

    cout << "Please enter a charge account number: ";
    cin >> ANum;
    searchList(accNum, SIZE, ANum);

    return 0;
}

int searchList(int list[], int numElms, int value) {
    int index = 0; //Used as a subscript to search array
    int position = -1; //To record position of search value
    bool found = false; //Flag to indicate if value was found

    while (index < numElms && !found) {
        if (list[index] == value) { //if the value is found
            found = true; //set the flag
            position = index; //Record the value's subscript
            cout << "That number is valid!";
        }
    index++;
}



return position; //Return the position, or =-1

}