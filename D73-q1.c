/*Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter size of the array (n): ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid size.\n");
        return 1;
    }

    int *nums = malloc(n * sizeof(int));
    if (!nums) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers (exactly one value is repeated): ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            printf("Invalid input.\n");
            free(nums);
            return 1;
        }
    }

    unsigned int size = 1;
    while (size < (unsigned int)n * 2) size <<= 1;
    unsigned int mask = size - 1;

    int *table = malloc(size * sizeof(int));
    char *used = calloc(size, sizeof(char));
    if (!table || !used) {
        printf("Memory allocation failed.\n");
        free(nums);
        free(table);
        free(used);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        unsigned int h = (unsigned int)nums[i] * 2654435761u;
        unsigned int idx = (h ^ (h >> 16)) & mask;

        while (used[idx]) {
            if (table[idx] == nums[i]) {
                printf("Repeated element: %d\n", nums[i]);
                free(nums);
                free(table);
                free(used);
                return 0;
            }
            idx = (idx + 1) & mask;   // linear probing
        }

        used[idx] = 1;
        table[idx] = nums[i];
    }

    printf("No repeated element found.\n");

    free(nums);
    free(table);
    free(used);
    return 0;
}