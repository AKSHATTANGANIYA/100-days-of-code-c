/*Check if two strings are anagrams of each other.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int areAnagrams(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0;
    }

    int count[256] = {0};

    for (int i = 0; i < len1; i++) {
        count[tolower(str1[i])]++;
        count[tolower(str2[i])]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams of each other.\n");
    } else {
        printf("The strings are not anagrams of each other.\n");
    }

    return 0;
}