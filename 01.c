#include <stdio.h>

int main(){
    int x; //declaration
    x = 123; //initialization
    int y = 321;

    int age = 18; // integer
    float points = 12.33; // float point
    char grade = 'A'; // Single character
    char name[] = "Luke"; //array of characters
    
    printf("Yo! This is %s\n", name);
    printf("You are %d yrs old\n", age); // %* - format specifier
    printf("Average grade: %c\n", grade);
    printf("You have %f points\n", points);
    return 0;
}
// %d - decimal