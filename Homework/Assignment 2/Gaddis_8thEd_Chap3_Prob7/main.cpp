/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: Box Office
 * Created on March 16, 2016, 5:57 PM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    char movie [30];   //Movie Name
    
    float adult;  //amount of Adult tickets sold
    float child;  //amount of Child tickets sold
    
    float adultT; //$ made from adult tickets
    float childT; //$ made from child tickets
    
    float gross;  //Gross Box Office Profit
    float net;    //Net Box Office Profit
    float distr;  //Amount paid to Distrubitor
    
    //Prompt user for input
    cout << "This calculates a theater's gross, net box office profit, "
            "and movie distributor for the night."
            " (Distributor takes %20)" << endl << endl;
    cout << "Adult Ticket: $10.00        Child Ticket $6.00" << endl << endl;
    
    cout << "What is the name of the Movie you would "
            "like to calculate profits for?" << endl << endl;
    cin.getline (movie, 30);
    cout << endl;
    
    cout << "Adult Tickets Sold: " << endl;
    cin >> adult;
    cout << endl;
    cout << "Child Tickets Sold: " << endl;;
    cin >> child; 
    cout << endl;
    
    //Calculations
    adultT = adult * 10;
    childT = child * 6;         
    
    gross = adultT + childT;
    distr = gross * 0.2;
    net = gross - distr;
    
    //Output
    cout << "Movie Name:                            " << movie << endl;
    cout << "Adult Tickets Sold:                     " << adult << endl;
    cout << "Child Tickets Sold:                     " << child << endl;
    cout << "Gross Box Office Profit:               $" << gross << endl;
    cout << "Net Box Office Profit:                 $" << net << endl;
    cout << "Amount Paid to Distributor:            $" << distr << endl;

    return 0;
}

