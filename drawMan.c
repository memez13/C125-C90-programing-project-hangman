#include <stdio.h>
#include <string.h>
#include "wordCheck.c"

int main() {
	int x;
	int y;
	int len;
	int i;

	char targetWord[8] = "program";
	char userGuess[50]; 

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
	scanf("%49s", &userGuess);

do {	

	if ((strcmp(targetWord, userGuess) == 0)) {
		y++;
    	}	
	
	else {
   		x++;
        	printf("Wrong guess!\n");	
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

		printf("GAME OVER.\n");
		printf("YOU LOSE.\n");
	
		break;
	}

	if (y == 1) {

		printf("GAME OVER.\n");
		printf("YOU WIN.\n");

		break;
	}
	
	else {
		//just to give the code an out
	}

	printf("Make a guess: ");
        scanf("%49s", &userGuess);

}while(1);

	return 0;
}
