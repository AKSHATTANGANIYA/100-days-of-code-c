/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
printf("Enter the elements: ");
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
printf("Enter the size of subarray (k): ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k\n");
        return 0;
    }

    long long windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    long long maxSum = windowSum;
 
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }
printf("Maximum sum of subarrays of size %d: ", k);
    printf("%lld\n", maxSum);
    return 0;
}