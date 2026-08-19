/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/
#include<stdio.h>
int main(){
    int a,b,c;
printf("Enter the first side of the triangle = ");
scanf("%d",&a);
printf("Enter the second side of the triangle = ");
scanf("%d",&b);
printf("Enter the third side of the triangle = ");
scanf("%d",&c);
if(a==b && a==c)
{printf("The given triangle is Equilateral");}
else if(a==b && a!=c || a==c && a!=b || b==c && b!=a){printf("The given triangle is Isosceles");}
else {printf("The given triangle is Scalene");}
    return 0;
}