/*Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.*/
#include <stdio.h>
 
int main() {
    int n, i;
    float term, sum = 0.0;
 
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
 
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            term = 1.0;
        } else {
            term = (2.0 * i - 1) / (2.0 * i);
        }
        sum += term;
    }
 
    printf("Sum of the series up to %d terms = %.1f\n", n, sum);
 
    return 0;
}