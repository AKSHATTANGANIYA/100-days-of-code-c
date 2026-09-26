/*Check if one string is a rotation of another.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2) {
        return 0;
    }

    char *temp = (char *)malloc(2 * len1 + 1);
    strcpy(temp, s1);
    strcat(temp, s1);
    int result = (strstr(temp, s2) != NULL);

    free(temp);
    return result;
}

int main() {
    char s1[1000], s2[1000];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    if (isRotation(s1, s2)) {
        printf("\"%s\" is a rotation of \"%s\"\n", s2, s1);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\"\n", s2, s1);
    }

    return 0;
}