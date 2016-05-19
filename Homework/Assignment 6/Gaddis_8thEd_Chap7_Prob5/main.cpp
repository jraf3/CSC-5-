/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Monkey Business
 * Created on May 18, 2016, 9:48 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    const int monkey = 3;//amount of monkeys
    const int day = 5;//weekdays
    float food [monkey][day];//3x5 array
    float ate = 0;
    float Tate = 0;//holds total lbs of food ate
    float avg = 0;//holds the average of food ate
    int m, d;//loop counters
    
    int least;
    int most;
    least = food[0];
    most = food[0];
    
    //intro
    cout<<"This program will calculate the average, least, and greatest "
        <<"amount of food each monkey ate."<<endl;
    cout<<"Please enter the following information..."<<endl;
    
    //Loops for input
    for (m = 0; m<monkey; m++){
        for (d=0;d<day; day++){
            cout <<"Monkey "<< (m+1);
            cout <<", Day "<< (d+1);
            cin >> food[m][d];
            cout <<" Pounds.";
        }
        cout <<endl;
    }

    //Loops to find total and average
    for (m=0; m<monkey; m++){
        Tate += ate[m][d];
        avg = Tate / ate[m][d];
    }
    
    //loop for most lbs ate
    for (m = 1; m <monkey; m++){
        if (food[m]>most)
            most = food[m];
    }
    
    //loop for least lbs ate
    for (m = 1; m <monkey; m++){
        if (food[m]<least)
            least = food[m];
    }
    
    cout <<fixed << showpoint<<setprecision(2);
    cout << "The average amount of lbs ate: "<< avg;
    cout << "Most amount of lbs ate: "<< most;
    cout <<"Least amount of lbs ate: "<< least;
    
    return 0;
}

