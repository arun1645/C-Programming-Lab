#include <stdio.h>

int main() {
    int mat1[3][3]; // Declare a 3x3 array of integers for the first matrix
    int mat2[3][3]; // Declare a 3x3 array of integers for the second matrix
    int product[3][3]; // Declare a 3x3 array of integers for the product
    int i, j, k;

    // Input the elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input the elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Multiply the two matrices and store the result in product
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            product[i][j] = 0;
            for (k = 0; k < 3; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print the product array
    printf("The product of the two matrices is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
