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

void gameStart();
void wordPrint();
void setWord(int, string);
void setSize(int);
string getWordFinal();
string getWordGuessed();
int getSize2();
void setMoney(int, int);
void addMoney(int, int);
int getMoney(int);
void setPlayer(int);
int getPlayer();
void guessLetter();
void guessWord();
void buyVowel();

/*
 * 
 */

string wordFinal;
string wordGuessed;
int size;
int money[2];
int currentPlayer;

int main(int argc, char** argv) {
    //Declare variables
    string choice;
    setPlayer(1);
    int round;

    //Intro
    cout << "Welcome to Two-player Hangman with a twist!" << endl
            << "This is a 2 Player game. " << endl
            << "Both players start with $300." << endl
            << "Vowels cost $50 each." << endl
            << "You lose $100 for incorrect answers." << endl
            << "You gain $200 for correct correct." << endl
            << "If a player goes below $0, that player loses automatically loses." << endl
            << "After 5 rounds, the player with the most money wins!" << endl
            << "Good luck and have fun!" << endl << endl;

    //Set player money to 300
    setMoney(1, 300);
    setMoney(2, 300);

    //Loop 5 rounds
    for (round = 1; round <= 10; round++) {

        //Game start
        cout << "Player " << getPlayer() << endl;
        gameStart();

        while (getWordFinal() != getWordGuessed()) {


            cout << endl << endl << "This word has " << size << " letters." << endl;
            wordPrint();
            cout << "Player " << getPlayer() << endl;
            cout << "You have $" << getMoney(getPlayer()) << endl;

            cout << "Enter 1, to guess a letter." << endl;
            cout << "Enter 2, to buy a vowel." << endl;
            cout << "Enter 3, to guess the word." << endl;
            cin>>choice;

            if (choice == "1") {
                guessLetter();
            } else if (choice == "2") {
                buyVowel();
            } else if (choice == "3") {
                guessWord();
            }

            //Check for loss
            if (getMoney(getPlayer()) < 0) {
                cout << "You ran out of money..." << endl;
                round = 11;
                setWord(2, getWordFinal());
            }//Check for win
            else if (getWordFinal() == getWordGuessed()) {
                cout << "You guessed correctly, you recieved $200!" << endl;
                addMoney(getPlayer(), 200);
            }
        }
        cout << "End of Round" << endl;
        if (getPlayer() == 1) {
            setPlayer(2);
        } else
            setPlayer(1);
    }

    //Check for player winner
    if (getMoney(1) > getMoney(2)) {
        cout << "Player 1 wins!" << endl;
    } else if (getMoney(1) < getMoney(2)) {
        cout << "Player 2 wins!" << endl;
    } else
        cout << "TIE!" << endl;

    return 0;
}

void gameStart() {
    //Declare Variables
    setWord(1, "");
    setWord(2, "");

    string word;

    cout << "Please enter the word you would like to use: ";
    cin>>word;
    setWord(1, word);

    //Create huge empty page to so player cannot see word entered
    for (int i = 0; i < 30; i++) {
        cout << endl;
    }

    //Turning word into underscores
    setSize(strlen(word.c_str()));
    string word2(getSize2(), '_');
    setWord(2, word2);

}

void wordPrint() {
    for (int i = 0; i < getSize2(); i++) {
        cout << (getWordGuessed())[i] << " ";
    }
    cout << endl;
}

void setWord(int word, string s) {
    if (word == 1) {
        wordFinal = s;
    } else if (word == 2) {
        wordGuessed = s;
    }
}

void setSize(int s) {
    size = s;
}

string getWordFinal() {
    return wordFinal;
}

string getWordGuessed() {
    return wordGuessed;
}

int getSize2() {
    return size;
}

void setMoney(int player, int amt) {
    money[player - 1] = amt;
}

void addMoney(int player, int amt) {
    money[player - 1] += amt;
}

int getMoney(int player) {
    return money[player - 1];
}

void setPlayer(int p) {
    currentPlayer = p;
}

int getPlayer() {
    return currentPlayer;
}

void guessLetter() {
    int found = 0;
    char let;
    string wordTemp = getWordGuessed();

    cout << "Please enter the letter you would like to guess: ";
    cin>>let;

    if (let != 'a' && let != 'e' && let != 'i' && let != 'o' && let != 'u') {

        for (int i = 0; i < getSize2(); i++) {
            if (let == (getWordFinal())[i]) {
                found++;
                wordTemp[i] = let;
            }
        }
        if (found > 0) {
            setWord(2, wordTemp);
        } else {
            cout << "You guessed incorrectly..." << endl;
        }
    } else {
        cout << "That was a vowel..." << endl;
    }
}

void guessWord() {
    string guess;

    cout << "Please enter the word you would like to guess: ";
    cin>>guess;

    if (guess == getWordFinal()) {
        setWord(2, guess);
    } else {
        cout << "You guessed incorrectly, you lose $100..." << endl;
        addMoney(getPlayer(), -100);
    }
}

void buyVowel() {
    char let;
    int found = 0;

    cout << "Vowels cost $50" << endl;
    cout << "Please enter what vowel you would like to buy: ";
    cin>>let;

    //check if letter entered is a vowel
    if (let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u') {
        addMoney(getPlayer(), -50);

        string wordTemp = getWordGuessed();

        for (int i = 0; i < getSize2(); i++) {
            if (let == (getWordFinal())[i]) {
                found++;
                wordTemp[i] = let;
            }
        }
        if (found > 0) {
            setWord(2, wordTemp);
        } else {
            cout << "You guessed incorrectly..." << endl;
        }
    } else {
        cout << "The letter you entered was not a vowel..." << endl;
    }
}