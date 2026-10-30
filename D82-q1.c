//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters
#include <stdio.h>
#include <ctype.h>
 
int main() {
    char filename[100];
    FILE *fp;
    int ch, vowels = 0, consonants = 0;
 
    printf("Enter file name: ");
    scanf("%99s", filename);
 
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: cannot open file '%s'.\n", filename);
        return 1;
    }
 
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);
 
    printf("Vowels     : %d\n", vowels);
    printf("Consonants : %d\n", consonants);
    return 0;
}