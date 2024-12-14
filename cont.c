#include <stdio.h>

int main(void){
    int n = 0, sum = 0, i;

    while(n < 10){
        scanf("%d", &i);
        if (n == 0)
        continue;
        sum += i;
        n++;
    }
}