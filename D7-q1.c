/*Write a program to input a year and check whether it is a leap year or not using conditional statements.
*/
#include <stdio.h>
int main() {
    int year;
    printf("Enter year = ");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || (year%400==0)){
        printf("Year %d is a leap year",year);
    }
    else{
        printf("Year %d is not a leap year",year);
    }
return 0;
}