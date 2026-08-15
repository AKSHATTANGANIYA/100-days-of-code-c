#include<stdio.h>
int main(){
int n, i=1, sum=0;
printf("n = ");
scanf("%d",&n);
while (i<=n){sum=sum+i,i=i+1;}
printf("Sum of the first %d natural numbers = %d",n,sum);

    return 0;
}
/*Write a program to find and display the sum of the first n natural numbers.*/