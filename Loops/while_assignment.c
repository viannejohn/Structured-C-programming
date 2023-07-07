#include <stdio.h>

int main() {
    int number, factorial;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    factorial = number--;
    
    while (number > 1) {
        factorial *= number;
        number--;
    }
    
    printf("The factorial is: %d\n", factorial);
    return 0;
}
