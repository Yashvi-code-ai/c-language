#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int sum = 0;

    // Input: number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100]; // assuming max 100x100 matrix

    // Input: matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // add to sum
        }
    }

    // Print the sum
    printf("Sum of all elements = %d\n", sum);

    return 0;
}
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int sum = 0;

    // Input: number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100]; // assuming max 100x100 matrix

    // Input: matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // add to sum
        }
    }

    // Print the sum
    printf("Sum of all elements = %d\n", sum);

    return 0;
}
