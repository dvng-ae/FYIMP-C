#include <stdio.h>

#define SIZE 10  // maximum size of matrix

int main() {
    int a[SIZE][SIZE], b[SIZE][SIZE], sum[SIZE][SIZE], diff[SIZE][SIZE], mult[SIZE][SIZE];
    int i, j, k, r1, c1, r2, c2;

   
    printf("Enter rows of first matrix: ");
    scanf("%d", &r1);
    
    printf("Enter columns of first matrix: ");
    scanf("%d", &c1);

    printf("Enter rows of second matrix: ");
    scanf("%d", &r2);
    
    printf("Enter columns of se matrix: ");
    scanf("%d", &c2);

    
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
            
    // Display matrices 
    
    printf("\nMatrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    
    // Matrix Addition and Subtraction

    
    if (r1 == r2 && c1 == c2) 
    {
        printf("\nMatrix Addition:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

        printf("\nMatrix Subtraction (A - B):\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                diff[i][j] = a[i][j] - b[i][j];
                printf("%d ", diff[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nAddition and Subtraction not possible (dimension mismatch).\n");
    }

    // Matrix Multiplication 
    if (c1 == r2) 
    {
        printf("\nMatrix Multiplication (A x B):\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                mult[i][j] = 0;
                for (k = 0; k < c1; k++) {
                    mult[i][j] += a[i][k] * b[k][j];
                }
                printf("%d ", mult[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMultiplication not possible (c1 != r2).\n");
    }

    return 0;
}
