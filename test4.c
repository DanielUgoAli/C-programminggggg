#include <stdio.h>

int main(void)
{
    int amount, dollar_20, dollar_10, dollar_5, dollar_1;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    dollar_20 = amount / 20;
    printf("$20 bills: %d\n \a", dollar_20);
    return 0;
}
