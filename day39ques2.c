#include <stdio.h>

int main() {
    int n, i, j;
    int sum = 0;

    // Input: size of square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[100][100]; // assuming max 100x100

    // Input: matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum of main diagonal elements
    for (i = 0; i < n; i++) {
        sum += matrix[i][i]; // main diagonal element
    }

    // Output the sum
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
