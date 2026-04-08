#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "header.h"

int main()
{
    char secretWord[100];
    char guessedWord[100];
    char guessedLetter;

    char guessedLetters[26];
    int guessIndex = 0;

    int remainingAttempts = 6;
    int length;
    int i;

    getWord(secretWord);

    length = strlen(secretWord);

    initializeOutput(guessedWord, length);

    printf("\nThe word has %d letters\n", length);
    displayWord(guessedWord, length);

    while(remainingAttempts != 0)
    {
        printf("\nGuess a letter: ");
        scanf(" %c", &guessedLetter);

        int alreadyGuessed = 0;

        for(i = 0; i < guessIndex; i++)
        {
            if(guessedLetters[i] == guessedLetter)
            {
                alreadyGuessed = 1;
                break;
            }
        }

        if(alreadyGuessed)
        {
            printf("You already guessed that letter!\n");
            continue;
        }

        guessedLetters[guessIndex++] = guessedLetter;

        if(checkLetter(secretWord, guessedLetter, length))
        {
            updateWord(secretWord, guessedWord, guessedLetter, length);
        }
        else
        {
            remainingAttempts--;
            showHangman(remainingAttempts);
            printf("\nWrong guess! Attempts left: %d\n", remainingAttempts);
        }

        displayWord(guessedWord, length);

        if(strcmp(guessedWord, secretWord) == 0)
        {
            printf("\nCongratulations! You WON. Word = %s\n", secretWord);
            return 0;
        }
    }

    printf("\nGame Over! You LOST. The word was %s\n", secretWord);

    return 0;
}