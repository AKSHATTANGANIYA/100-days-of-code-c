/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   * */
#include <stdio.h>
int main() {
    int i, j, k;
    for (i = 1; i <= 5; i++) {
        k = 2 * i - 1;
        for (j = 0; j < 5 - i; j++)
            printf(" ");
        for (j = 0; j < k; j++)
            printf("*");
        printf("\n");
    }
    for (i = 5 - 1; i >= 1; i--) {
        k = 2 * i - 1;
        for (j = 0; j < 5 - i; j++)
            printf(" ");
        for (j = 0; j < k; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}