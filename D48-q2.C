/*Reverse each word in a sentence without changing the word order.*/
#include <stdio.h>
#include <string.h>

void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
        len--;
    }

    int start = 0;
    for (int i = 0; i <= len; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverse(sentence, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed words: %s\n", sentence);
    return 0;
}