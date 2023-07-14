#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    int number, sumEven = 0, sumOdd = 0;

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file
    file = fopen(filename, "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;  // Exit the program with an error
    }

    // Read the integers from the file
    while (fscanf(file, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            sumEven += number;  // Add even number to the sumEven
        } else {
            sumOdd += number;  // Add odd number to the sumOdd
        }
    }

    // Close the file
    fclose(file);

    // Display the results
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}
