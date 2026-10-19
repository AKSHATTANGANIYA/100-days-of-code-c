/*Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m, n;

    printf("Enter size of first array (m): ");
    if (scanf("%d", &m) != 1 || m < 0) {
        printf("Invalid size for the first array.\n");
        return 1;
    }

    int *a = malloc((m > 0 ? m : 1) * sizeof(int));
    if (!a) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d sorted elements of the first array: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array (n): ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid size for the second array.\n");
        free(a);
        return 1;
    }

    int *b = malloc((n > 0 ? n : 1) * sizeof(int));
    if (!b) {
        printf("Memory allocation failed.\n");
        free(a);
        return 1;
    }

    printf("Enter %d sorted elements of the second array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int *merged = malloc((m + n > 0 ? m + n : 1) * sizeof(int));
    if (!merged) {
        printf("Memory allocation failed.\n");
        free(a);
        free(b);
        return 1;
    }

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while (i < m) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];

    printf("\nFirst array:  ");
    for (int x = 0; x < m; x++) printf("%d ", a[x]);

    printf("\nSecond array: ");
    for (int x = 0; x < n; x++) printf("%d ", b[x]);

    printf("\nMerged sorted array: ");
    for (int x = 0; x < k; x++) {
        printf("%d", merged[x]);
        if (x < k - 1) printf(" ");
    }
    printf("\n");

    free(a);
    free(b);
    free(merged);
    return 0;
}