#include <stdio.h>

#define MAXIMUM_NO_OF_ROWS 100
#define MAXIMUM_NO_OF_COLUMNS 100

void calculateSums(int matrix[MAXIMUM_NO_OF_ROWS][MAXIMUM_NO_OF_COLUMNS], int no_of_Rows, int no_of_Cols, int Sum_of_rows[], int Sum_of_columns[]) {
    int i, j;

    // Calculating sum of each row
    for (i = 0; i < no_of_Rows; i++) {
        Sum_of_rows[i] = 0; // we initialize sum for each row to 0
        for (j = 0; j < no_of_Cols; j++) {
            Sum_of_rows[i] += matrix[i][j];
        }
    }

    // Calculating sum of each column
    for (j = 0; j < no_of_Cols; j++) {
        Sum_of_columns[j] = 0; // we initialize sum for each column to 0
        for (i = 0; i < no_of_Rows; i++) {
            Sum_of_columns[j] += matrix[i][j];
        }
    }
}

int main() {
    int matrix[MAXIMUM_NO_OF_ROWS][MAXIMUM_NO_OF_COLUMNS];
    int no_of_Rows, no_of_Cols, i, j;

    // Get the number of rows and columns from the user
    printf("Enter the number of rows: ");
    scanf("%d", &no_of_Rows);
    printf("Enter the number of columns: ");
    scanf("%d", &no_of_Cols);

    // Get the matrix elements from the user 
    printf("Enter the matrix elements:\n");
    for (i = 0; i < no_of_Rows; i++) {
        for (j = 0; j < no_of_Cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int Sum_of_rows[MAXIMUM_NO_OF_ROWS], Sum_of_columns[MAXIMUM_NO_OF_COLUMNS];

    // Calculate all needed sums
    calculateSums(matrix, no_of_Rows, no_of_Cols, Sum_of_rows, Sum_of_columns);

    // Displaying the sum of each row
    printf("Sum of each row:\n");
    for (i = 0; i < no_of_Rows; i++) {
        printf("Row %d: %d\n", i + 1, Sum_of_rows[i]);
    }

    // Displaying the sum of each column
    printf("Sum of each column:\n");
    for (j = 0; j < no_of_Cols; j++) {
        printf("Column %d: %d\n", j + 1, Sum_of_columns[j]);
    }

    return 0;
}
