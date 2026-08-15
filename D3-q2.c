# include<stdio.h>
int main(){

    int a,b,c;
    printf("value of a before swapping with b = ");
    scanf("%d",&a);
    printf("value of b before swapping with a = ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    
    printf("value of a after swapping with b = %d\n",a);
    printf("value of b after swapping with a = %d\n",b);
    return 0;
} 
/*Write a program to swap two numbers using a third variable.*/

