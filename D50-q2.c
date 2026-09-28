/*Print all sub-strings of a string.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("All sub-strings of \"%s\":\n", str);
    for (i = 0; i < len; i++) {
        for (j = i + 1; j <= len; j++) {
            printf("%.*s\n", j - i, str + i);
        }
    }

    return 0;
}