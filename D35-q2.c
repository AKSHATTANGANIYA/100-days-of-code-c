/*Rotate an array to the right by k positions.*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int k;
    printf("Enter the number of positions to rotate:\n");
    scanf("%d", &k);
    
    k = k % n;
    
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];
    printf("Rotated array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", temp[i]);
    printf("\n");
    
    return 0;
}