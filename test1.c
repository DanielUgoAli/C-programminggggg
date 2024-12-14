#include <stdio.h>
#define EQN_CONST (4.0f / 3.0f)
#define PI 3.142

// constexpr double eqn_const = 4.0f / 3.0f;
/*A program that calculate the volume of a sphere*/

int main(void)
{
    int radius; 
    float volume;

    printf("Enter the radius (meters): ");
    scanf("%d", &radius);

    printf("Equivalent Volume: %.2f", EQN_CONST * PI * radius * radius * radius);
    return 0;
}


