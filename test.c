#include <stdio.h>
#include <string.h>
#include <time.h>
#include "wordCheck.c"
#include "head.h"
#define MAX_TRIES 7;
#define WORDS 5;
#define WORD_LEN 25;

const char *word_bank[] = { "extraterrestrial", "industry", "vote", "map", "contemporary", "program" };
wordLength(const char *word) {
	for (i = 0; i < len; i++) {
    	            printf("_ ");
        	}
        	printf("\n");
	}



int main() {   //Somehow figure out a way to implement memory allocation into this project.....
	extern int x;
	extern int y;
	extern int c;

	const char *word = random_word;
	char guess[50]; 

	printf(" ------\n");
	printf("      ||\n");
	printf("      ||\n");
	printf("      ||\n");
	printf("      ||\n");
	printf("      ||\n");
	printf("      ||\n");
	printf("______||\n");

	printf("I have selected a word.\n");
    	wordLength();
    	printf("\n");
    	printf("Make a guess: ");
    	scanf("%49s", &guess);
		checkWord(word, guess);
do {

	if (strcmp(word, guess) == 0) {
		y++;
	}

	else {
		x++;
		printf("Wrong guess!\n");
		printf(Current Prgress: ");
		wordLength();
		printf("%s\n", word);
	}

	if (x == 1) {

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
	
		break;
	}

	if (y == 1) {

		printf("GAME OVER. YOU WIN.\n");

		break;
	}
	
	else {
		//to give the code an out
	}

	printf("Make a guess: ");
        scanf("%49s", &guess);

}while(1);

	return 0;
}
