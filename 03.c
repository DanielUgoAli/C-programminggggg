#include <stdio.h>
#include <stdbool.h>

int main(){
    float item1 = 12.33;
    float item2 = 32.11;
    float item3 = 100.88;

    printf("Item 1: $%.2f\n", item1);
    printf("Item 2: $%.2f\n", item2);
    printf("Item 3: $%.2f\n", item3);

    
    // CONSTANT 
    const float PI = 3.14159;
    printf("pi is %f\n", PI);

    return 0;
}