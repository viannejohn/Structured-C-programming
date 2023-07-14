#include <stdio.h>

#define MAX_SIZE 100

void findSecondLargestAndSmallest(int arr[], int size, int *secondLargest, int *secondSmallest) {
    int largest = arr[0];
    int smallest = arr[0];

    // Find the largest and smallest elements in the array
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            *secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < smallest) {
            *secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > *secondLargest && arr[i] < largest) {
            *secondLargest = arr[i];
        } else if (arr[i] < *secondSmallest && arr[i] > smallest) {
            *secondSmallest = arr[i];
        }
    }
}

int main() {
    int arr[MAX_SIZE];
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array (maximum %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Check if the size is valid
    if (size < 2 || size > MAX_SIZE) {
        printf("Invalid size entered.\n");
        return 1;  // Exit the program with an error status
    }

    // Get the array elements from the user
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int secondLargest = arr[0];
    int secondSmallest = arr[0];

    // Find the second largest and second smallest elements in the array
    findSecondLargestAndSmallest(arr, size, &secondLargest, &secondSmallest);

    // Display the results
    printf("Second largest element: %d\n", secondLargest);
    printf("Second smallest element: %d\n", secondSmallest);

    return 0;
}
