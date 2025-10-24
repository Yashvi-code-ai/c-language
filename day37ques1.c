#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input: number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];   // assuming max 100x100 matrix
    int rowSum[100];        // array to store sum of each row

    // Input: matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0; // initialize row sum
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j]; // add element to row sum
        }
    }

    // Print row sums
    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
