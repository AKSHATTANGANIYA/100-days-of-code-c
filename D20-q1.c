/*Write a program to find the product of odd digits of a number.
*/  
#include<stdio.h>
int main(){
    int a,product=1,odd=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a!=0){
        int digit = a % 10;
        if(digit % 2 != 0){
            product *= digit;
            odd = 1;
        }
        a /= 10;
    }
    if(odd){
        printf("The product of odd digits is %d",product);
    } else {
        printf("The product of odd digits is 1 (no odd digits, assume 1).");
    }
    return 0;
}