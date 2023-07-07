#include <stdio.h>

int main() {
    int grades[18] = {85, 92, 78, 88, 95, 80, 86, 90, 83, 77, 92, 79, 88, 91, 84, 87, 93, 81};
    
    int studentIndex = 5;  // Example: Printing grade for student at index 5
    
    // Check if the student index is within the valid range
    if (studentIndex >= 0 && studentIndex < 18) {
        printf("Grade of student %d: %d\n", studentIndex + 1, grades[studentIndex]);
    } else {
        printf("Invalid student index.\n");
    }

    return 0;
}
