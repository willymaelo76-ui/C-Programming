#include <stdio.h>

static int readMatrix(int matrix[10][10], int rows, int cols);
static void display(int matrix[10][10], int rows, int cols);
static void mul(int x[10][10], int y[10][10], int z[10][10],
                int rows, int inner, int cols);

int main(void)
{
    int a[10][10], b[10][10], c[10][10];
    int m, n, p, q;

    printf("Enter the size of A Matrix (Row and Col):\n");
    if (scanf("%d%d", &m, &n) != 2) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the size of B Matrix (Row and Col):\n");
    if (scanf("%d%d", &p, &q) != 2) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    if (m < 1 || m > 10 || n < 1 || n > 10 ||
        p < 1 || p > 10 || q < 1 || q > 10) {
        printf("Matrix dimensions must be between 1 and 10.\n");
        return 1;
    }

    if (n != p) {
        printf("Multiplication is not possible: columns of A must equal rows of B.\n");
        return 1;
    }

    printf("Enter elements of A:\n");
    if (!readMatrix(a, m, n)) {
        printf("Invalid matrix element.\n");
        return 1;
    }

    printf("Enter elements of B:\n");
    if (!readMatrix(b, p, q)) {
        printf("Invalid matrix element.\n");
        return 1;
    }

    mul(a, b, c, m, n, q);

    printf("A Matrix is:\n");
    display(a, m, n);
    printf("B Matrix is:\n");
    display(b, p, q);
    printf("C Matrix is:\n");
    display(c, m, q);

    return 0;
}

static int readMatrix(int matrix[10][10], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 0;
            }
        }
    }
    return 1;
}

static void display(int matrix[10][10], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

static void mul(int x[10][10], int y[10][10], int z[10][10],
                int rows, int inner, int cols)
{
    int i, j, k;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            z[i][j] = 0;
            for (k = 0; k < inner; k++) {
                z[i][j] += x[i][k] * y[k][j];
            }
        }
    }
}