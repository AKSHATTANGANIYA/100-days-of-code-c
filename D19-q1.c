/*Write a program to find the LCM of two numbers.*/
#include <stdio.h>
int main(){
    int a,b,lcm;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
scanf("%d",&b);
for (lcm=(a>b)?a:b;lcm++;){
    if(lcm%a==0 && lcm%b==0){
        printf("The LCM of %d and %d is %d",a,b,lcm);
        break;
    }
}
return 0;
}
