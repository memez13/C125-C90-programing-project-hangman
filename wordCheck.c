#include <stdio.h>
#include <string.h>

        char word[8] = "program";
        char guess[50];


void wordLength() {
        int len;
        int i;

        char word[8] = "program";

        len = sizeof(word) / sizeof(word[0]);

        for (i = 0; i < len; i++) {
                printf("_ ");
        }
        printf("\n");
}

