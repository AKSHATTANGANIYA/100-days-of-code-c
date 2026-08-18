/*Write a program to find the roots of a quadratic equation and categorize them.*/
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,root1,root2;
    printf("Enter coefficient a = ");
    scanf("%f",&a);
    printf("Enter coefficient b = ");
    scanf("%f",&b);
    printf("Enter coefficient c = ");
    scanf("%f",&c);
    d = b*b - 4*a*c;
    if(d > 0){
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);}
    else if(d == 0){
        root1 = root2 = -b / (2*a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);}
    else{ float realPart = -b / (2*a);
        float imaginaryPart = sqrt(-d) / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);}
 return 0;
}