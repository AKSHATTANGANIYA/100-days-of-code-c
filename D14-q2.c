/*Write a program to print the product of even numbers from 1 to n.
*/
#include<stdio.h>
int main(){
    int n, product = 1;
    printf("Enter value of n = ");
    scanf("%d", &n);
    for(int i=2; i<=n; i+=2){ // Loop through even numbers only
        product *= i; // Multiply the even number to the product
    }
    printf("Product of even numbers from 1 to %d is: %d\n", n, product);
    return 0;
}