#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input: number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100]; // assuming max 100x100

    // Input: matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Traversal of the matrix:\n");

    // Traverse diagonals starting from each element of the first row
    for (int startCol = 0; startCol < cols; startCol++) {
        i = 0;
        j = startCol;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Traverse diagonals starting from each element of the last column, excluding first row
    for (int startRow = 1; startRow < rows; startRow++) {
        i = startRow;
        j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}

