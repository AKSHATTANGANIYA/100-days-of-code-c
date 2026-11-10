/*Show that enums store integers by printing assigned values*/
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    printf("SUCCESS=%d\nFAILURE=%d\nTIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);

    return 0;
}
