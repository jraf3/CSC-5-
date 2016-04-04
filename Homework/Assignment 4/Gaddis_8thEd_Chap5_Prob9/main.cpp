/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Hotel Occupancy
 * Created on April 4, 2016, 10:10 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int aFloor; //amount of floors hotel has
    unsigned int floor = 1; //floor being iterated
    unsigned int room; //number of rooms in current floor
    unsigned int tRoom = 0; //total number of rooms
    unsigned int occ; //occupied rooms
    float tOcc; //Total occupied rooms
    float unocc; //unoccupied rooms
    float pOcc; //percentage of Occupied rooms
    
    //Ask user for amount of floors
    cout << "How many floors does the hotel have? ";
    cin >> aFloor;
    
    //check if amount of floors is less than 1
    if (!(aFloor < 1)){
        //Loop for floor input
        while (floor <= aFloor && floor != 13){
            cout << "Total number of rooms in floor " << floor << ": ";
            cin >> room;

            //Check if amount of rooms in floor is less than 10
            if (!(room < 10)){
            cout << "Occupied rooms in floor " << floor << ": ";
            cin >> occ;
            floor++;
            tRoom += room;
            tOcc += occ;
            }

            else {
                cout << "Error!";
                return 0;
            }
        }
    }
    else {
            return 0;
        }
    
    //Calculate unoccupied rooms
    unocc = tRoom - tOcc;
    
    //Calculate percentage of occupied rooms
    pOcc = tOcc / tRoom;
    
    //Output 
    cout << "Total amount of rooms in hotel: " << tRoom << endl;
    cout << "Occupied rooms: " << tOcc << endl;
    cout << "Unoccupied rooms: " << unocc << endl;
    cout << "Percentage of rooms occupied: " << pOcc << endl;
    
    return 0;
}

