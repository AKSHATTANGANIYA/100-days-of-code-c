/*Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.*/
#include <stdio.h>

int main() {
    char filename[256];
    FILE *fp;
    int ch;

    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) {
        printf("Error: invalid input.\n");
        return 1;
    }

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: could not open '%s'. File may not exist.\n", filename);
        return 1;
    }

    printf("\n--- Contents of %s ---\n", filename);
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}