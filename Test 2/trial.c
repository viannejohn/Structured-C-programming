#include <stdio.h>

#define MAX_SIZE 100

void printSumOfEvenAndOdd(int numbers[], int numCount) {
    int sumEven = 0;
    int sumOdd = 0;

    // Calculate the sum of even and odd numbers
    for (int i = 0; i < numCount; i++) {
        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            sumOdd += numbers[i];
        }
    }

    // Print the sum of even and odd numbers
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);
}

int main() {
    FILE *file;
    char filename[100];
    int numbers[MAX_SIZE];
    int numCount = 0;

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file
    file = fopen(filename, "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;  // Exit the program with an error status
    }

    // Read the integers from the file
    while (fscanf(file, "%d", &numbers[numCount]) == 1) {
        numCount++;
    }

    // Close the file
    fclose(file);

    // Print the integers read from the file
    printf("Integers read from the file:\n");
    for (int i = 0; i < numCount; i++) {
        printf("%d\n", numbers[i]);
    }

    // Print the sum of even and odd numbers
    printSumOfEvenAndOdd(numbers, numCount);

    return 0;
}
