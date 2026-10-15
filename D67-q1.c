/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int l, int r) {
    int pivot_index = l + rand() % (r - l + 1);
    swap(&arr[pivot_index], &arr[r]);
    int pivot = arr[r];

    int i = l;
    for (int j = l; j < r; j++) {
        if (arr[j] < pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}
int quickselect(int arr[], int n, int k) {
    int l = 0, r = n - 1;

    while (l <= r) {
        int p = partition(arr, l, r);
        if (p == k) {
            return arr[p];
        } else if (p > k) {
            r = p - 1;
        } else {
            l = p + 1;
        }
    }
    return -1;
}

int main() {
    int n, k;
    srand((unsigned)time(NULL));

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }
    }

    printf("Enter k: ");
    if (scanf("%d", &k) != 1 || k < 1 || k > n) {
        printf("Invalid k. It must be between 1 and %d.\n", n);
        free(arr);
        return 1;
    }

    printf("The %dth smallest element is: %d\n", k, quickselect(arr, n, k - 1));

    free(arr);
    return 0;
}