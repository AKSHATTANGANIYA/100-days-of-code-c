/*Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: could not open input.txt.\n");
        return 1;
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: could not create output.txt.\n");
        fclose(in);
        return 1;
    }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    fclose(in);
    fclose(out);

    printf("Done. Uppercase text written to output.txt.\n");
    return 0;
}