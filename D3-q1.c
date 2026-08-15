#include<stdio.h>
int main(){
    float fahrenheit, celsius;
    printf("Temperature in Celsius = ");
    scanf("%f",&celsius);
    fahrenheit=(celsius*1.8)+32;
    printf("Temperature in Fahrenheit = %.2f",fahrenheit);
    return 0;
}
/*Write a program to convert temperature from Celsius to Fahrenheit.
*/