#include <stdio.h>
#include <string.h>


void wordLength() {
        int len;
        int i;

        const char *word_bank[] = { "extraterrestrial", "industry", "vote", "map", "contemporary" };
        int x = sizeof(word_bank) / sizeof(word_bank[0]);

        srand((unsigned)time(NULL));

        int random_index = rand() % x;

        const char *random_word = word_bank[random_index];
        //implement random word pulled from word_bank (might need to pull it from another FILE)

        len = sizeof(random_word) / sizeof(random_word[0]);

        for (i = 0; i < len; i++) {
                printf("_ ");
        }
        printf("\n");
}

