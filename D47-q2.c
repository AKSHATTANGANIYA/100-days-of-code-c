/*Find the longest word in a sentence.*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char longestWord[100] = "";
    char currentWord[100] = "";

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *token = strtok(sentence, " \t\n");
    while (token != NULL) {
        if (strlen(token) > strlen(longestWord)) {
            strcpy(longestWord, token);
        }
        token = strtok(NULL, " \t\n");
    }

    printf("The longest word is: %s\n", longestWord);

    return 0;
}