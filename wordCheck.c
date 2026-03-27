#include <stdio.h>
#include <string.h>


void wordSelect() {

        const char *word_bank[] = { "extraterrestrial", "industry", "vote", "map", "contemporary" };
        int x = sizeof(word_bank) / sizeof(word_bank[0]);

        srand((unsigned)time(NULL));

        int random_index = rand() % x;

        const char *random_word = word_bank[random_index];
}
        

