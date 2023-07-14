#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

#define MAX_SIZE 100

int main() {
    FILE *file;
    char filename[100];
    int numbers[MAX_SIZE];
    int numCount = 0;
    int sumEven = 0, sumOdd = 0;

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file
    file = fopen(filename,"a");
    file = fopen(filename, "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;  // Exit the program with an error status
    }

    // Read the integers from the file using fgets
    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        numbers[numCount++] = atoi(line);
    }

    // Calculate the sum of even and odd numbers
    for (int i = 0; i < numCount; i++) {
        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            sumOdd += numbers[i];
        }
    }

    // Close the file
    fclose(file);

    // Display the results
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}

