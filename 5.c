#include <stdio.h>

int main(){

    char name[25]; //bytes if over 25 it will create buffer overflow
    int age;

    printf("\nYour name: ");
    scanf("%s", &name);

    printf("\nYour age: ");
    scanf("%d", &age); //& address of operator

    printf("\nHello %s", name);
    printf("\nAge is %d", age);
    return 0;
}
