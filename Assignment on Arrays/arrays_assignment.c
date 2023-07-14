#include <stdio.h>

#define MAX_SIZE 100

void initializeArray(int arr[], int size) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array initialized successfully.\n");
}

void printArray(int arr[], int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findMaxElement(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMinElement(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

double calculateAverage(int arr[], int size) {
    int sum = calculateSum(arr, size);
    return (double)sum / size;
}

int searchElement(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;  // Element not found
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice;

    printf("Welcome to the Array Operations Program!\n");

    do {
        printf("\nMenu:\n");
        printf("1. Initialize an array\n");
        printf("2. Print the array\n");
        printf("3. Find the maximum element in the array\n");
        printf("4. Find the minimum element in the array\n");
        printf("5. Calculate the sum of all elements in the array\n");
        printf("6. Calculate the average of all elements in the array\n");
        printf("7. Search for a specific element in the array\n");
        printf("8. Exit the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the size of the array (maximum %d): ", MAX_SIZE);
                scanf("%d", &size);
                initializeArray(arr, size);
                break;
            case 2:
                printArray(arr, size);
                break;
            case 3: {
                int max = findMaxElement(arr, size);
                printf("Maximum element in the array: %d\n", max);
                break;
            }
            case 4: {
                int min = findMinElement(arr, size);
                printf("Minimum element in the array: %d\n", min);
                break;
            }
            case 5: {
                int sum = calculateSum(arr, size);
                printf("Sum of all elements in the array: %d\n", sum);
                break;
            }
            case 6: {
                double avg = calculateAverage(arr, size);
                printf("Average of all elements in the array: %.2lf\n", avg);
                break;
            }
            case 7: {
                int target;
                printf("Enter the element to search for: ");
                scanf("%d", &target);
                int index = searchElement(arr, size, target);
                if (index != -1) {
                    printf("Element %d found at index %d.\n", target, index);
                } else {
                    printf("Element not found in the array.\n");
                }
                break;
            }
            case 8:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}
