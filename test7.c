#include <stdio.h>

/*I cant remeber the chapter😅 But for the chapter reverse the number*/
int main(void){
    int n, j;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);
    
    j = n % 10; // The last digit in n
    float y = n / 10; // n with the last digit removed

    printf("The reversal is : %d%.0f", j, y);

    return 0;
}
