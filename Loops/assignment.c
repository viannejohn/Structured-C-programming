#include <stdio.h>

int main() {
    int no_Of_Students = 0;
    int total_no_of_Students;

    printf("Enter the total number of students in the class: ");
    scanf("%d", &total_no_of_Students);

    for (int i = 1; i <= total_no_of_Students; i++) {
        printf("Student %d\n", i);
        no_Of_Students++;
    }

    printf("The total number of students in the class is: %d\n", no_Of_Students);
    return 0;
}
