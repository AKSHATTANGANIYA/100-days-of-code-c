/*Print all enum names and integer values using a loop*/
#include <stdio.h>

enum Color { RED, YELLOW, GREEN, ORANGE, COUNT};

int main() {
    const char *names[] = {"RED", "YELLOW", "GREEN", "ORANGE"};

    for (int i = RED; i < COUNT; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}