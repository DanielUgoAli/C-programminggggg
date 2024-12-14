#include <stdio.h>

int main(void){

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {0};
    /*Initial value = {0,0,0,0,0,0,0,0,0,0}*/
    int c[10] = {[2] = 29, [9] = 7, [5] = 48};
    


    return 0;
}