/*Find the digit that occurs the most times in an integer number.*/
#include <stdio.h>
int main() {
    int number, digit_count[10] = {0}, max_digit = 0, max_count = 0, i;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    while(number != 0) {
        int digit = number % 10;
        digit_count[digit]++;
        number /= 10;
    }
    for(i = 0; i < 10; i++) {
        if(digit_count[i] > max_count) {
            max_count = digit_count[i];
            max_digit = i;
        }
    } printf("The digit that occurs the most times is: %d (occurs %d times)\n", max_digit, max_count);

return 0;
}