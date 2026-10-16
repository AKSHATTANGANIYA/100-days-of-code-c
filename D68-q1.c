/*Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    
    int n = strlen(s) - 1;
    int maxLength = 0;
    int start = 0;
    int charIndex[256];
  
    for (int i = 0; i < 256; i++) {
        charIndex[i] = -1;
    }

    for (int end = 0; end < n; end++) {
        if (charIndex[s[end]] >= start) {
            start = charIndex[s[end]] + 1;
        }
        charIndex[s[end]] = end;
        if (end - start + 1 > maxLength) {
            maxLength = end - start + 1;
        }
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLength);
    return 0;
}