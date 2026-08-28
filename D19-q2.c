/*Write a program to find the sum of digits of a number.*/
#include<stdio.h>
int main(){
    int a,sum=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a!=0){
        sum+=a%10;
        a/=10;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}