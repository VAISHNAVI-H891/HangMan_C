#include "header.h"

void getWord(char secretWord[])
{
    printf("Enter the secret word: ");
    scanf("%s", secretWord);
    system("clear");
}

void initializeOutput(char guessedWord[], int length)
{
    int i;

    for(i = 0; i < length; i++)
        guessedWord[i] = '_';

    guessedWord[length] = '\0';
}

void displayWord(char guessedWord[], int length)
{
    int i;

    printf("\nWord: ");

    for(i = 0; i < length; i++)
        printf("%c ", guessedWord[i]);

    printf("\n");
}

int checkLetter(char secretWord[], char guessedLetter, int length)
{
    int i;

    for(i = 0; i < length; i++)
        if(secretWord[i] == guessedLetter)
            return 1;

    return 0;
}

void updateWord(char secretWord[], char guessedWord[], char guessedLetter, int length)
{
    int i;

    for(i = 0; i < length; i++)
        if(secretWord[i] == guessedLetter)
            guessedWord[i] = guessedLetter;
}

void showHangman(int choice)
{
    system("clear");

    switch(choice)
    {
        case 0:
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO/", '\\');
            printf("\n\t||    | ");
            printf("\n\t||   / %c", '\\');
            printf("\n\t||      ");
            break;

        case 1:
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO/", '\\');
            printf("\n\t||    | ");
            printf("\n\t||     %c", '\\');
            printf("\n\t||      ");
            break;

        case 2:
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO/", '\\');
            printf("\n\t||    | ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            break;

        case 3:
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO/", '\\');
            printf("\n\t||      ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            break;

        case 4:
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO ", '\\');
            printf("\n\t||      ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            break;

        case 5:
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||    O ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            break;
    }
}
