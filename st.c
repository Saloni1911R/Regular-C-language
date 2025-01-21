#include <stdio.h>

void inputMatrix(int matrix[][10], int rows, int cols) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[][10], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int A[][10], int B[][10], int result[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplyMatrices(int A[][10], int B[][10], int result[][10], int rowsA, int colsA, int rowsB, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void transposeMatrix(int matrix[][10], int result[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

void searchElement(int matrix[][10], int rows, int cols, int element) {
    int found = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == element) {
                printf("Element %d found at position [%d][%d]\n", element, i + 1, j + 1);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found) {
        printf("Element %d not found in the matrix.\n", element);
    }
}

int sumOfMatrix(int matrix[][10], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {
    int A[10][10], B[10][10], result[10][10];
    int rowsA, colsA, rowsB, colsB;
    int choice, element;

    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
    inputMatrix(A, rowsA, colsA);

    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);
    inputMatrix(B, rowsB, colsB);

    while (1) {
        printf("\nMenu:\n");
        printf("1) Addition of matrices\n");
        printf("2) Multiplication of matrices\n");
        printf("3) Transpose of matrix A or B\n");
        printf("4) Search element in matrix\n");
        printf("5) Sum of elements of matrix\n");
        printf("6) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rowsA == rowsB && colsA == colsB) {
                    addMatrices(A, B, result, rowsA, colsA);
                    printf("Result of addition:\n");
                    displayMatrix(result, rowsA, colsA);
                } else {
                    printf("Matrices cannot be added. They must have the same dimensions.\n");
                }
                break;
            case 2:
                if (colsA == rowsB) {
                    multiplyMatrices(A, B, result, rowsA, colsA, rowsB, colsB);
                    printf("Result of multiplication:\n");
                    displayMatrix(result, rowsA, colsB);
                } else {
                    printf("Matrices cannot be multiplied. Columns of A must be equal to rows of B.\n");
                }
                break;
            case 3:
                printf("Transpose of matrix A:\n");
                transposeMatrix(A, result, rowsA, colsA);
                displayMatrix(result, colsA, rowsA);
                printf("Transpose of matrix B:\n");
                transposeMatrix(B, result, rowsB, colsB);
                displayMatrix(result, colsB, rowsB);
                break;
            case 4:
                printf("Enter element to search: ");
                scanf("%d", &element);
                printf("Search in matrix A:\n");
                searchElement(A, rowsA, colsA, element);
                printf("Search in matrix B:\n");
                searchElement(B, rowsB, colsB, element);
                break;
            case 5:
                printf("Sum of elements in matrix A: %d\n", sumOfMatrix(A, rowsA, colsA));
                printf("Sum of elements in matrix B: %d\n", sumOfMatrix(B, rowsB, colsB));
                break;
            case 6:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
