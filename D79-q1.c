/*Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.*/
#include <stdio.h>
#include <string.h>

#define NAME_LEN 256
#define LINE_LEN 1000

int main() {
    char filename[NAME_LEN];
    char text[LINE_LEN];

    printf("Enter the file name: ");
    if (scanf("%255s", filename) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    FILE *check = fopen(filename, "r");
    if (check == NULL) {
        printf("Error: %s does not exist.\n", filename);
        return 1;
    }
    int needNewline = 0;
    if (fseek(check, 0, SEEK_END) == 0 && ftell(check) > 0) {
        fseek(check, -1, SEEK_END);
        if (fgetc(check) != '\n') {
            needNewline = 1;
        }
    }
    fclose(check);
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) { }

    printf("Enter a line of text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Invalid input.\n");
        return 1;
    }
    text[strcspn(text, "\n")] = '\0';

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: could not open %s in append mode.\n", filename);
        return 1;
    }

    if (needNewline) {
        fputc('\n', fp);
    }
    fprintf(fp, "%s\n", text);

    if (fclose(fp) != 0) {
        printf("Error: failed to save the data.\n");
        return 1;
    }

    printf("Text was successfully appended to %s\n", filename);
    return 0;
}