/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 * Purpose: 2 player Hangman with a twist
 * Created on May 2, 2016, 9:46 AM
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void money(int);
void vowel(int);
void player1Turn();
void wordPrint(string, bool array[], int);

/*
 * 
 */
int main(int argc, char** argv) {
//Intro
cout<<"Welcome to Two-player Hangman with a twist!"<<endl
    <<"This is a 2 Player game. "<<endl
    <<"Both players start with $300."<<endl
    <<"Vowels cost $50 each."<<endl
    <<"You lose $100 for incorrect answers."<<endl
    <<"You gain $200 for correct correct."<<endl
    <<"If a player goes below $0, that player loses automatically loses."<<endl
    <<"After 5 rounds, the player with the most money wins!"<<endl
    <<"Good luck and have fun!"<<endl<<endl;
        
//Game start
player1Turn();


    return 0;
}

void player1Turn(){
//Declare Variables
string word;
char let;

cout<<"Player 1, please enter the word you would like to use: ";
cin>>word;

//Create huge empty page to so player cannot see word entered
for(int i=0;i<30;i++){
    cout<<endl;
}

//Turning word into underscores
int size=strlen(word.c_str());
bool correct[size];
for(int i=0;i<size;i++){
    correct[i] = false;
}

//Letters are underscores until guess correctly
wordPrint(word,correct,size);

cout<<endl<<endl<<"This word has "<<size<<" letters."<<endl;
cout<<"Please enter a letter: ";
cin>>let;

for(int i=0;i<size;i++){
    if(let==word[i]){
        correct[i] = true;
    } 
    //else marker for wrong
}

wordPrint(word,correct,size);

}

void wordPrint(string word, bool array[], int size){
    for(int i=0;i<size;i++){
    if(array[i]){
        cout<<word[i];
    } else {
        cout<<"_ ";
    }
}
    
}

void money(){
    
}