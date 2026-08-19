/*Write a program to display the day of the week based on a number (1–7) using switch-case.*/
#include<stdio.h>
int main(){
int n;
printf("Enter number = ");
scanf("%d",&n);
switch(n){
    case 1:
    printf("The current day of the week is Monday");
    break;
    case 2:
    printf("The current day of the week is Tuesday");
    break;
    case 3:
    printf("The current day of the week is Wednesday");
    break;
    case 4:
    printf("The current day of the week is Thursday");
    break;
    case 5:
    printf("the current day of the week is Friday");
    break;
    case 6:
    printf("The current day of the week is Saturday");
    break;
    case 7:
    printf("The current day of the week is Sunday");
    break;
    default:
    printf("Invalid number");
    break;
}
return 0;
}