#include <stdio.h>

int main() {
    int n, i, j, distinct = 1;

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

    // Check if diagonal elements are distinct
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) { // only compare diagonal elements
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    // Output result
    if (distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
