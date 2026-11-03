/*Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum TrafficLight { RED, YELLOW, GREEN, INVALID };
enum TrafficLight parseLight(const char *str) {
    char temp[20];
    int i;

    for (i = 0; str[i] != '\0' && i < 19; i++) {
        temp[i] = toupper((unsigned char)str[i]);
    }
    temp[i] = '\0';

    if (strcmp(temp, "RED") == 0)    return RED;
    if (strcmp(temp, "YELLOW") == 0) return YELLOW;
    if (strcmp(temp, "GREEN") == 0)  return GREEN;
    return INVALID;
}

void showAction(enum TrafficLight light) {
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid signal. Please enter RED, YELLOW, or GREEN.\n");
    }
}

int main() {
    char input[20];

    printf("Enter signal (RED, YELLOW, GREEN): ");
    if (scanf("%19s", input) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    enum TrafficLight light = parseLight(input);
    showAction(light);

    return 0;
}