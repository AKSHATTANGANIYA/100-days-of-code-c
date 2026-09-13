/*Find the second largest element in an array.*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int first = -2147483648, second = -2147483648;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    printf("second largest: %d\n", second);
    return 0;
}