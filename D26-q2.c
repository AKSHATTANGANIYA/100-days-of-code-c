/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */
#include <stdio.h>
 
int main() {
    int i, j, k;
    for(i=1;i<=3;i++) {
        k=2*i-1;
        for(j=0;j<k;j++)
            printf("*\n");
        printf("\n");
 
    for(i=3-1;i>=1;i--) {
        k=2*i-1;
        for(j=0;j<k;j++)
            printf("*\n");
        if (i > 1)
            printf("\n");
    }
    return 0;
}