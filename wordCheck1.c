#include <stdio.h>
#include <string.h>

void wordLength(char *revealed) {
	int i;
	int len = strlen(revealed);
	for (i = 0; i < len; i++) {
    	            printf("%c", revealed[i]);
        	}
        	printf("\n");
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

int doubleCheck(const char *guess) {
        int i;

        if (guess[0] == '\0' || guess[0] == '\n') {
                return 0; 
        }

        for (i = 0; guess[i] != '\0' && guess[i] != '\n'; i++) {
                if (!isalpha((unsigned char)guess[i]) && guess[i] != ' ') { 
                        return 0; 
                }

                if (!isalpha((unsigned char)guess[i]) && guess[i] != ' ' && guess[i] != '\n') {
                           return 0; 
                }

        }
    return 1; 

}
