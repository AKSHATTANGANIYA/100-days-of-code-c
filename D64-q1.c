/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the window size k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k\n");
        free(arr);
        return 1;
    }

    int *dq = (int *)malloc(n * sizeof(int));
    int front = 0, rear = -1;

    for (int i = 0; i < n; i++) {
        if (front <= rear && dq[front] <= i - k) {
            front++;
        }

        while (front <= rear && arr[dq[rear]] <= arr[i]) {
            rear--;
        }

        dq[++rear] = i;

        if (i >= k - 1) {
            printf("%d ", arr[dq[front]]);
        }
    }
    printf("\n");

    free(arr);
    free(dq);
    return 0;
}