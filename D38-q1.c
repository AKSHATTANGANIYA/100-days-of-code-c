/*Add two matrices.*/
#include <stdio.h>
     
int main() {
    int a[10][10], b[10][10], c[10][10];
    int i, j, r, k;

    printf("Enter the number of rows and columns of the matrices : ");
    scanf("%d %d", &r, &k);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < k; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < k; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < k; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < k; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}