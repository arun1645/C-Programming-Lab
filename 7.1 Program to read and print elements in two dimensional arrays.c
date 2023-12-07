#include <stdio.h>

int main() {
    int matrix[3][3]; // Declare a 3x3 matrix
    int i, j;

    // Input elements in the matrix
    printf("Enter elements in a 3x3 matrix:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print elements in the matrix
    printf("\nElements of the 3x3 matrix:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
