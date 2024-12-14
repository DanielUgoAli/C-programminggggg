#include <stdio.h>
// #define X_FIFTH (x*x*x*x*x)

// int main(void)
// {
//     int x, poly;
//     printf("Enter a value for x: ");
//     scanf("%d", &x);

//     poly = (3*x*x*x*x*x) + (2*x*x*x*x) - (5*x*x*x) - (x*x) + (7*x) - 6;
//     printf("%d", poly);
//     return 0;
// }

/*Horner's Rule*/
int main(void)
{
    int x, poly;
    printf("Enter a value for x: ");
    scanf("%d", &x);

    poly = ((((3 + 2)*x - 5)*x - 1)*x + 7)*x - 6;
    printf("%d", poly);
    return 0;
}

