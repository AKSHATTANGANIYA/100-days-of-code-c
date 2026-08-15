#include<stdio.h>
int main(){
    float pi, radius, circumference, area;
    printf("radius of circle = ");
    scanf("%f",&radius);
    pi=3.14;
    area=pi*radius*radius;
    circumference=2*pi*radius;
    printf("area of circle = %f\n",area);
    printf("circumference = %f\n",circumference);
    return 0;
}
/*Write a program to calculate the area and circumference of a circle given its radius.*/
