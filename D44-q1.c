/*Count spaces, digits, and special characters in a string.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    int spaces = 0, digits = 0, special = 0, alphabets = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
       else if (!isalpha(str[i])) {
            special++;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}