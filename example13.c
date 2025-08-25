
/// Program that takes two 2D arrays arr1[2][2] and arr2[2][2]

#include <stdio.h>

int main() {
    int a[2][2], b[2][2];
    printf("Enter 4 elements of matrix A (2x2):\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%d", &a[i][j]);

    printf("Enter 4 elements of matrix B (2x2):\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%d", &b[i][j]);

    // Summation
    int sum[2][2];
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    printf("\nSummation (A + B):\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }

    // Multiplication
    int mul[2][2] = {{0,0},{0,0}};
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            for (int k = 0; k < 2; ++k)
                mul[i][j] += a[i][k] * b[k][j];

    printf("\nMultiplication (A x B):\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            printf("%d\t", mul[i][j]);
        printf("\n");
    }

    return 0;
}

