#include <stdio.h>

int main() {
    int grades[18] = {85, 92, 78, 88, 95, 80, 86, 90, 83, 77, 92, 79, 88, 91, 84, 87, 93, 81};

    // Printing the grades of all students
    int i;
    for (i = 0; i < 18; i++) {
        printf("Grade of student %d: %d\n", i + 1, grades[i]);
    }

    return 0;
}
