/*
Authors: Cole and Stanley
Files: hangman1.c, head.h, wordCheck1.c
Project: A fun game of Hangman, compiled with all the concepts we learned
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "head.h"
#include "wordCheck1.c"
#include "SAVE_file.c"

int main() {   //Somehow figure out a way to implement memory allocation into this project.....
	srand((unsigned)time(NULL));
	const char *word_bank[] = { "extraterrestrial", "industry", "vote", "map", "contemporary", "program" };
	int a = sizeof(word_bank) / sizeof(word_bank[0]);
	int random_index = rand() % a;
	const char *random_word = word_bank[random_index];

	extern int x;
	extern int y;
	extern int c;

	const char *word = random_word;
	char guess[50]; 

	int len = strlen(word); 
	char revealed[50]; 
	int i; 
	for (i = 0; i < len; i++){
	     revealed[i] = '_';	
	}     
	revealed[len] = '\0';

	printf(" -------\n");
	printf("      ||\n");
	printf("      ||\n");
	printf("      ||\n");
	printf("      ||\n");
	printf("      ||\n");
	printf("      ||\n");
	printf("______||\n");

	printf("I have selected a word.\n");
    	wordLength(revealed);
    	printf("\n");
    	printf("Make a guess: ");
    	scanf("%49s", guess);
		doubleCheck(guess);

        if (doubleCheck(guess) != 1) {
                printf("Invalid guess. Try again\n");
                printf("Make a guess: ");
                scanf("%49s", &guess);
                doubleCheck(guess);
        }

        else {
                //give the code an out
        }

	SAVE(guess);
	int found = checkGuess(word, guess, revealed);
	if (found) {
		printf("Good guess!\n");
	} else {
		x++;
		printf("Wrong guess!\n");
	}
	printf("Current Progress: ");
	wordLength(revealed);
 
	if (wordComplete(word, revealed)) {
		y++;
	}

do {

	if (y == 1){
	   printf("GAME OVER. YOU WIN!\n");
	   printf("Would you like to see your guesses?");
	   printf("(y or n): ");
	   char yes_no;
	   scanf("%c", &yes_no);
	   while (yes_no != 'y' || yes_no != 'n' || yes_no != 'Y' || yes_no != 'N') {
			printf("Invalid character. Enter y or n: ");
			scanf("%c", &yes_no);
	   }   
	   if (yes_no == 'y' || yes_no == 'Y'){
			printf("Loading saves now....");
		    LOAD();
	   } else {
			printf("Thank you for playing. Have a nice day!");
	   }
	   break;
	}

	else if (x == 1) {

		    printf(" ------\n");
        	printf("  |   ||\n");
        	printf("  O   ||\n");
        	printf("      ||\n");
        	printf("      ||\n");
        	printf("      ||\n");
        	printf("      ||\n");
        	printf("______||\n");

		
	}

	else if (x == 2) {

			printf(" ------\n");
        	printf("  |   ||\n");
        	printf("  O   ||\n");
        	printf("  |   ||\n");
        	printf("  |   ||\n");
        	printf("      ||\n");
        	printf("      ||\n");
        	printf("______||\n");

		
	}

	else if (x == 3) {
			printf(" ------\n");
        	printf("  |   ||\n");
        	printf("  O   ||\n");
        	printf(" (|   ||\n");
        	printf("  |   ||\n");
        	printf("      ||\n");
        	printf("      ||\n");
        	printf("______||\n");

		
	}

	else if (x == 4) {

			printf(" ------\n");
        	printf("  |   ||\n");
        	printf("  O   ||\n");
        	printf(" (|)  ||\n");
        	printf("  |   ||\n");
        	printf("      ||\n");
        	printf("      ||\n");
        	printf("______||\n");

		
	}

	else if (x == 5) {

			printf(" ------\n");
        	printf("  |   ||\n");
        	printf("  O   ||\n");
        	printf(" (|)  ||\n");
        	printf("  |   ||\n");
        	printf(" (    ||\n");
        	printf("      ||\n");
        	printf("______||\n");

		
	}

	else if (x == 6) {

			printf(" ------\n");
        	printf("  |   ||\n");
        	printf("  O   ||\n");
        	printf(" (|)  ||\n");
        	printf("  |   ||\n");
        	printf(" ( )  ||\n");
        	printf("      ||\n");
        	printf("______||\n");

		printf("GAME OVER! YOU LOSE!\n");
		printf("Would you like to see your guesses?");
	    printf("(y or n): ");
	    char yes_no;
	    scanf("%c", &yes_no);
	    while (yes_no != 'y' || yes_no != 'n' || yes_no != 'Y' || yes_no != 'N') {
			 printf("Invalid character. Enter y or n: ");
			 scanf("%c", &yes_no);
	    }   
	    if (yes_no == 'y' || yes_no == 'Y'){
			 printf("Loading saves now....");
		     LOAD();
	    } else {
			 printf("Thank you for playing. Have a nice day!");
	    }
		break;
	}
	
	else {
		//to give the code an out
	}
	
	printf("Make a guess: ");
	scanf("%49s", guess);
	doubleCheck(guess);

        if (doubleCheck(guess) != 1) {
                printf("Invalid guess. Try again\n");
                printf("Make a guess: ");
                scanf("%49s", &guess);
                doubleCheck(guess);
        }

        else {
                //give the code an out
        }

	SAVE(guess);
	found = checkGuess(word, guess, revealed);
	if (found) {
		printf("Good guess!\n");
	} else {
		x++;
		printf("Wrong guess!\n");
	}
	printf("Current Progress: ");
	wordLength(revealed);
 
	if (wordComplete(word, revealed)) {
		y++;
	}


	
}while(1);

	return 0;
}
