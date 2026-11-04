/*Create an enum for months and print how many days each month has.*/
#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC, INVALID };

enum Month getMonth(const char *s) {
    const char *names[] = {"JAN","FEB","MAR","APR","MAY","JUN",
                           "JUL","AUG","SEP","OCT","NOV","DEC"};
    for (int i = 0; i < 12; i++)
        if (strcmp(s, names[i]) == 0)
            return (enum Month)i;
    return INVALID;
}

int main() {
    char input[20];
    printf("Enter month (JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC): ");
    scanf("%19s", input);

    switch (getMonth(input)) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        case JAN: case MAR: case MAY: case JUL:
        case AUG: case OCT: case DEC:
            printf("31 days\n");
            break;
        default:
            printf("Invalid month\n");
    }
    return 0;
}