#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_TRIES = 7;
#define WORDS = 5;
#define WORD_LEN = 25;

char word_bank[WORD_LEN][WORDS] = { "extraterrestrial", "industry", "vote", "map", "contemporary" };

int checkGuess(char word[], char display[], char guess) {  //check guess letter to random word from word_bank
	int found = 0;
	int i;
	for (i = 0; i < strlen(word); i++) {
			if (word[i] == guess){
				display[i] = guess;
				found = 1;
			}
	}
	return found;
}

void showStatus(char display[], int triesLeft){		//rough draft pulled from homework. Make it implement hangman display instead
		printf("\nCurrent Progress: ");
		int i;
		for(i = 0; i < strlen(display); i++){
				printf("%c", display[i]);
		}
		printf("\n");
}

void wordLength() {
        int len;
        int i;

        char targetWord[] = "program";   //implement random word pulled from word_bank (might need to pull it from another FILE)

        len = sizeof(targetWord) / sizeof(targetWord[0]);

        for (i = 0; i < len; i++) {
                printf("_ ");
        }
        printf("\n");
}

int main() {   //Somehow figure out a way to implement memory allocation into this project.....
	int x;
	int y;

	char word[] = "program";
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
	
do {

	if (strcmp(word, guess) == 0) {
		y++;
	}

	else {
		x++;
		printf("Wrong guess!");
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

		printf("GAME OVER. YOU LOSE.\n");
	
		break;
	}

	if (y == 1) {

		printf("GAME OVER. YOU WIN.\n");

		break;
	}
	
	else {
		printf("Something bad happned");
	}

	printf("Make a guess: ");
        scanf("%49s", &guess);

}while(1);

	return 0;
}
