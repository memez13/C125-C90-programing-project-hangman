#include <stdio.h>
#include <string.h>


void wordSelect() {

        const char *word_bank[] = { "extraterrestrial", "industry", "vote", "map", "contemporary" };
        int x = sizeof(word_bank) / sizeof(word_bank[0]);

        srand((unsigned)time(NULL));

        int random_index = rand() % x;

        const char *random_word = word_bank[random_index];
}
        
int checkGuess(const char *word, const char *guess, char *revealed) {  //check guess letter to random word from word_bank
	int found = 0;
	int i;
	int len = strlen(word);
	for (i = 0; i < len; i++) {
		if (word[i] == guess[0]){
			revealed[i] = guess[0];	
			found = 1;
		}
	}
	return found;
}

int wordComplete(const char *word, const char *revealed){
	return strcmp(word, revealed) == 0;
}

