#include <stdio.h>
#include <string.h>

void wordLength() {
        int len;
        int i;

        char targetWord[] = "program";

        len = sizeof(targetWord) / sizeof(targetWord[0]);

        for (i = 0; i < len; i++) {
                printf("_ ");
        }
        printf("\n");
}

int main() {
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
    scanf("%49s", &userGuess);
	
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
