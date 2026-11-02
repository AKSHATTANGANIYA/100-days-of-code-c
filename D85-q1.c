//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    printf("%-12s %s\n", "Day", "Value");
    printf("--------------------\n");

    for (enum Day d = SUNDAY; d <= SATURDAY; d++) {
        printf("%-12s %d\n", names[d], d);
    }

    return 0;
}