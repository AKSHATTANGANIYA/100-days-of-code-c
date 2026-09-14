/*Read and print a matrix*/
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d", matrix[i][j]);
            if (j != cols - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}