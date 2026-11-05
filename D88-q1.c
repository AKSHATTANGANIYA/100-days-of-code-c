/*Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.*/
#include <stdio.h>
#include <string.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT,
    UNKNOWN
} Status;

Status parse_status(const char *str) {
    if (strcmp(str, "SUCCESS") == 0) return SUCCESS;
    if (strcmp(str, "FAILURE") == 0) return FAILURE;
    if (strcmp(str, "TIMEOUT") == 0) return TIMEOUT;
    return UNKNOWN;
}

int main(void) {
    char input[32];
    printf("Input(SUCCESS/FAILURE/TIMEOUT): %s", input);
    if (scanf("%31s", input) != 1) {
        return 1;
    }
    switch (parse_status(input)) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
            break;
    }

    return 0;
}