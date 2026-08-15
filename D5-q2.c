#include<stdio.h>
int main(){
    int seconds, hours, minutes, seconds2;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds2 = seconds % 60;
    printf("Time in hours:minutes:seconds format: %d:%d:%d\n", hours, minutes, seconds2);
    return 0;
}
/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/