/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: 2 player word guess with currency
 * Created on May 2, 2016, 9:46 AM
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

void money(int);
void vowel(int);
void player1Turn();

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Intro
cout<<"Welcome to Word Guess with currency!"<<endl
    <<"This is a 2 Player game. "<<endl
    <<"Both players start with $300."<<endl
    <<"Vowels cost $50 each."<<endl
    <<"You lose $100 for incorrect answers."<<endl
    <<"You gain $200 for correct correct."<<endl
    <<"Good luck and have fun!"<<endl;
        
//Game start
player1Turn();


    return 0;
}

void player1Turn(){
//Declare Variables
string word;
cout<<"Player 1, please enter the word you would like to use: ";
cin>>word;

//Turning word into undercores
int size = strlen(word.c_str());
bool correct[size];
for(int i=0;i<size;i++ ){
    correct[i] = false;
}

for( int i=0;i <size;i++){
    if(correct[i]){
        cout<<word[i];
    } else {
        cout<<"_ ";
    }
}

}