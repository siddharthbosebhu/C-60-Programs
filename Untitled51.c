#include <stdio.h>

int main() {
    int i, j;
    int matrix1[3][3], matrix2[3][3], sum[3][3];

    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix2[i][j]);

    // Adding the matrices
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

    printf("Sum of the matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
