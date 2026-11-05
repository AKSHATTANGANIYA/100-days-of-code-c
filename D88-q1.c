/*Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.*/
#include <stdio.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

void print_status(Status s) {
    switch (s) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }
}

int main(void) {
    Status results[] = { SUCCESS, FAILURE, TIMEOUT };
    int count = sizeof(results) / sizeof(results[0]);

    for (int i = 0; i < count; i++) {
        print_status(results[i]);
    }

    return 0;
}