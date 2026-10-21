/*Q120: Write a program to take a string input. Change it to sentence case.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 1000

int main(void) {
    char str[MAX_LEN];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Invalid input.\n");
        return 1;
    }
    str[strcspn(str, "\n")] = '\0';

    int newWord = 1; 

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char c = (unsigned char)str[i];

        if (isspace(c)) {
            newWord = 1;
        } else if (newWord) {
            str[i] = (char)toupper(c);
            newWord = 0;
        } else {
            str[i] = (char)tolower(c);
        }
    }

    printf("Title case: %s\n", str);
    return 0;
}