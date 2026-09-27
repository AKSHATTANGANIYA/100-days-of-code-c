/*Print initials of a name with the surname displayed in full.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];
    char words[10][20];
    int wordCount = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    
    name[strcspn(name, "\n")] = '\0';

    char *token = strtok(name, " ");
    while (token != NULL && wordCount < 10) {
        strcpy(words[wordCount], token);
        wordCount++;
        token = strtok(NULL, " ");
    }

    if (wordCount == 0) {
        printf("No name entered.\n");
        return 0;
    }

    printf("Result: ");

    for (int i = 0; i < wordCount - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }

    printf("%c", toupper(words[wordCount - 1][0]));
    for (int i = 1; words[wordCount - 1][i] != '\0'; i++) {
        printf("%c", tolower(words[wordCount - 1][i]));
    }

    printf("\n");
    return 0;
}