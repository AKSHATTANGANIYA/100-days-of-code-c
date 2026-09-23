/*Count frequency of a given character in a string.*/
#include <stdio.h>

int main() {
    char str[100], ch;
    int frequency = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            frequency++;
        }
        i++;
    }

    printf("Frequency of '%c' in the string is: %d\n", ch, frequency);

    return 0;
}