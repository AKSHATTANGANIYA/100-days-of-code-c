/*Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.*/
#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY, INVALID };

enum Operation getOperation(const char *s) {
    if (strcmp(s, "ADD") == 0)      return ADD;
    if (strcmp(s, "SUBTRACT") == 0) return SUBTRACT;
    if (strcmp(s, "MULTIPLY") == 0) return MULTIPLY;
    return INVALID;
}

int main() {
    char cmd[20];
    int a, b;
    printf("Enter operation (ADD, SUBTRACT, MULTIPLY) followed by two integers: ");

    scanf("%s %d %d", cmd, &a, &b);

    enum Operation op = getOperation(cmd);

    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}