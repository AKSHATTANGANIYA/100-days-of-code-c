#include<stdio.h>
int main(){
    int a,b;
printf("value of a before swapping with b = ");
    scanf("%d",&a);
    printf("value of b before swapping with a = ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;  
    printf("value of a after swapping with b = %d\n",a);
    printf("value of b after swapping with a = %d\n",b);
    return 0;
}
/*Write a program to swap two numbers without using a third variable.
*/
