/*Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.*/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[256];
    long chars = 0, words = 0, lines = 0;
    int c;
    int inWord = 0;
    int lastChar = '\n';

    printf("Enter the file name: ");
    if (scanf("%255s", filename) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: could not open %s. Make sure the file exists.\n", filename);
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        chars++;

        if (c == '\n') {
            lines++;
        }

        if (isspace((unsigned char)c)) {
            inWord = 0; 
        } else if (!inWord) {
            inWord = 1;
            words++;
        }

        lastChar = c;
    }
    if (chars > 0 && lastChar != '\n') {
        lines++;
    }

    fclose(fp);

    printf("\nFile: %s\n", filename);
    printf("Characters: %ld\n", chars);
    printf("Words:      %ld\n", words);
    printf("Lines:      %ld\n", lines);

    return 0;
}