#include <stdio.h>

int main() {
    int a = 3;
    int b = 4;
    int c = 5;
    // a = a + 3;
    // b = b - a;
    // c = a * c;

    a += 3;
    b -= a;
    c *= c;
    
    // Don't change below this line
    printf("a = %d, b = %d, c = %d", a, b, c);
    return 0;
};