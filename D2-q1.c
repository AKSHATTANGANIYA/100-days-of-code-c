#include<stdio.h>
int main() {
    float length, breadth, perimeter, area;
    printf("Length of rectangle = ");
    scanf("%f", &length);
    printf("Breadth of rectangle = ");
    scanf("%f", &breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("Area of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);
    return 0;
}
/*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/