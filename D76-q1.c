/*Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.*/
#include <stdio.h>

#define LINE_LEN 256

int main() {
    char line[LINE_LEN];

    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open info.txt. Make sure the file exists.\n");
        return 1;
    }

    printf("Contents of info.txt:\n");
    printf("---------------------\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    printf("---------------------\n");
    printf("End of file reached.\n");

    fclose(fp);
    return 0;
}