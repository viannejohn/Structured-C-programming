#include <stdio.h>

int main() {
    int a = 10, b = 45, c = 7, d = 2;
    
    int sum = a + b;
    int difference = b - c;
    int product = c * d;
    int quotient = b / a;
    int remainder = b % c;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
