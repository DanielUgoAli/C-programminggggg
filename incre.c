#include <stdio.h>

int main() {
    int x = 5;
    
    // Postfix Increment
    printf("Initial value of x: %d\n", x);  // Outputs: 5
    printf("Postfix Increment: %d\n", x++);  // Outputs: 5 (uses current value, then increments)
    printf("Value of x after Postfix Increment: %d\n", x);  // Outputs: 6

    // Reset x for the next example
    x = 5;

    // Prefix Increment
    printf("Initial value of x: %d\n", x);  // Outputs: 5
    printf("Prefix Increment: %d\n", ++x);  // Outputs: 6 (increments first, then uses the new value)
    printf("Value of x after Prefix Increment: %d\n", x);  // Outputs: 6

    return 0;
}
