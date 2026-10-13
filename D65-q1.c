/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.*/
#include <stdio.h>
#include <stdlib.h>

void firstNegativeInWindows(int arr[], int n, int k) {
    int *queue = (int *)malloc(n * sizeof(int));
    int front = 0, rear = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            queue[rear++] = i;
        if (i >= k - 1) {
            while (front < rear && queue[front] < i - k + 1)
                front++;

            if (front < rear)
                printf("%d ", arr[queue[front]]);
            else
                printf("0 ");
        }
    }
    printf("\n");
    free(queue);
}

int main() {
    int n, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid window size.\n");
        free(arr);
        return 1;
    }

    firstNegativeInWindows(arr, n, k);

    free(arr);
    return 0;
}