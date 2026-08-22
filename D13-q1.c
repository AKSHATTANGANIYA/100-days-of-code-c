/*Write a program to implement a basic calculator using switch-case for +, -, *, /, % */
#include <stdio.h>
int main(){
    int n1, n2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    switch(operator){
        case '+':
            result = n1 + n2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = n1 - n2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = n1 * n2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if(n2 != 0){
                result = n1 /n2;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if(n2 != 0){
                result = n1 % n2;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;

}