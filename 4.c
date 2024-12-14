#include <stdio.h>

int main(){
    // Arithmetic Operators
 
    int x = 7;
    int y = 3;
    int z = x + y;
    float p = x / (float)y;

    int o = x % y;

    printf("SUM is %d\n", z);
    printf("Division ans is: %f\n", p);
    printf("Modulus ans: %d\n", o);

    int h = 10;

    h += 9;
    //h -= 3;
    //h *= 4;
    //h %= 4;
    
    return 0;
}
