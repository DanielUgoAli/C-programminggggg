#include <stdio.h>
#define TAX (5.0f / 100.0f) // Constant Definition

int main(void)
{
    float amount, tax_added;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: %.1f\a", TAX * 100 + amount);
    return 0;
}