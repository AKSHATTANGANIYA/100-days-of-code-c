/*Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter size of the array (n): ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int *nums = malloc((n > 0 ? n : 1) * sizeof(int));
    if (!nums) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d distinct integers from 0 to %d (one number is missing): ", n, n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            printf("Invalid input.\n");
            free(nums);
            return 1;
        }
    }
    int missing = n;
    for (int i = 0; i < n; i++) {
        missing ^= i ^ nums[i];
    }

    printf("Missing number: %d\n", missing);

    free(nums);
    return 0;
}