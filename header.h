#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void showHangman(int choice);
void getWord(char secretWord[]);
void initializeOutput(char guessedWord[], int length);
void displayWord(char guessedWord[], int length);
int checkLetter(char secretWord[], char guessedLetter, int length);
void updateWord(char secretWord[], char guessedWord[], char guessedLetter, int length);

#endif