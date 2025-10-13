#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;

    // Input dimensions for the first matrix
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d%d", &m, &n);

    // Input dimensions for the second matrix
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d%d", &p, &q);

    // Check if matrix multiplication is possible
    if (n != p) {
        printf("Matrix multiplication not possible. The number of columns of A must be equal to the number of rows of B.\n");
        return 0;
    }

    int a[m][n], b[p][q], c[m][q];

    // Initialize the result matrix to 0
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
        }
    }

    // Input elements of matrix A
    printf("Enter the elements of matrix A: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of matrix B
    printf("Enter the elements of matrix B: \n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the result matrix
    printf("The product of the two matrices is: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}