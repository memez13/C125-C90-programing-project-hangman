#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void SAVE(const char *guess){
    FILE *fp = fopen("SAVE.txt", "a");
    if (fp == NULL) {
	printf("There is an error");
	return 1;
    }
    fprintf(fp, "%s\n", guess);
    fclose(fp);

}

void LOAD(void){
    char saved[50];
    FILE *fp = fopen("SAVE.txt", "r");
    if (fp == NULL){
	printf("There is an error");
	return 1;
    }
    while(fgets(saved, sizeof(line), fp)){
	printf("Saved guess: %s", saved);
    }
    fclose(fp);
}
