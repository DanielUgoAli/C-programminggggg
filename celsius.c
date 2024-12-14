#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)
// #define RECIPROCAL_OF_PI ()
// #define reciprocal_of_pi (1.0f / 3.12159f)

/* Converts a Fahrenheit tempurature to Celsius */

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit tempurature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    printf("Celsius Equivalent: %.1f\n", celsius);
    
    return 0;
}