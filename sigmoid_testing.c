#include <stdio.h>
#include <math.h>

double sigmoid(double z){
    return (1 / 1 + exp(-z));
}

int main(void){
    double y, x = 5.0;
    y = sigmoid(x);
    printf("%e", y);
    return 0;
}
