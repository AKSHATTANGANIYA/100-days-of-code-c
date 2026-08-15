/*Write a program to input an integer and check whether it is positive, negative or zero using nested if–else*/
#include<stdio.h>
int main(){
    int a;
    printf("Enter an integer = ");
    scanf("%d",&a);
    if (a>0){printf("%d is positive",a);}
else if (a<0){printf("%d is negative",a);}
else{printf("%d is zero",a);}
return 0;
}