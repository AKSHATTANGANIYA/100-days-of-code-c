//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>
#include <stdlib.h>
 

int findFirst(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
 
    while (low <= high) {
        int mid = low + (high - low) / 2;
 
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}
int findLast(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
 
    while (low <= high) {
        int mid = low + (high - low) / 2;
 
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}
 
int main(void) {
    int n, target;
 
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1, -1\n");
        return 0;
    }
 
    int *nums = (int *)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
 
    printf("Enter %d sorted elements (ascending): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
 
    printf("Enter the target: ");
    scanf("%d", &target);
 
    int first = findFirst(nums, n, target);
    int last  = findLast(nums, n, target);
 
    if (first == -1) {
        printf("-1, -1\n");
    } else {
        printf("First occurrence index: %d\n", first);
        printf("Last occurrence index : %d\n", last);
        printf("Result: %d, %d\n", first, last);
    }
 
    free(nums);
    return 0;
}