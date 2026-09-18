/*Perform diagonal traversal of a matrix*/
#include <stdio.h>
#include <stdlib.h>

void diagonalTraverse(int **mat, int rows, int cols) {
    int *result = (int *)malloc(rows * cols * sizeof(int));
    int index = 0;

    for (int d = 0; d < rows + cols - 1; d++) {

        if (d % 2 == 0) {
            int r = (d < rows) ? d : rows - 1;
            int c = (d < rows) ? 0 : d - rows + 1;

            while (r >= 0 && c < cols) {
                result[index++] = mat[r][c];
                r--;
                c++;
            }
        } else {
            int c = (d < cols) ? d : cols - 1;
            int r = (d < cols) ? 0 : d - cols + 1;

            while (c >= 0 && r < rows) {
                result[index++] = mat[r][c];
                r++;
                c--;
            }
        }
    }

    for (int i = 0; i < index; i++) {
        printf("%d", result[i]);
        if (i != index - 1) printf(" ");
    }
    printf("\n");

    free(result);
}

int main() {
    int rows, cols;
    printf("Enter number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    int **mat = (int **)malloc(rows * sizeof(int *));
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        mat[i] = (int *)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Diagonal traversal:\n");
    diagonalTraverse(mat, rows, cols);
    for (int i = 0; i < rows; i++) free(mat[i]);
    free(mat);

    return 0;
}
