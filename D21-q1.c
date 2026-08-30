/*Write a program to swap the first and last digit of a number.
*/
#include<stdio.h>
#include<math.h>
int main(){
    int num, first, last, digits=0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    temp = num;
    for(digits = 0; temp !=0; digits++){
        temp /=10;
        first = temp;
}
if (digits==1){
    printf("The number has only one digit, so swapping does not change it: %d\n", num);
}
else{
    first = num;
    for(int i=0; i<digits-1; i++){
        first /= 10;
    }
    int swapped_num = last;
    for(int i=0; i<digits-1; i++){
        swapped_num *= 10;
    }
    swapped_num += (num % (int)pow(10, digits-1)) - last + first;
    
    printf("The number after swapping the first and last digit is: %d\n", swapped_num);
}
return 0;
}