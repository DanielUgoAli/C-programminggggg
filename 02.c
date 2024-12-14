#include <stdio.h>
#include <stdbool.h>

int main() {

    float c = 3.141592; //4 bytes(32 bit of precision) 6-7 digits %f
    double d = 3.141592653589793;//8 bytes (64 bits of precision) 15-16 digits %lf
    
    bool e = true; // 1 byte(true or false)%d
    printf("Boolean should be 1: {%d}\n", e);
    
    char f = 122; //1 byte (-128 to +127) %d or %c ASCII
    unsigned char g = 255; //1 byte (0 to +255) %dor%c disregards negative numbers

    // By default most data types are already signed
    short int h = 32767; // 2bytes (-32, 768 to +32, 767) %d
    unsigned short int i = 65535; //2bytes (0 to +65, 535)%d
    // if you declare int beyond range it will overload

    int j = 12324345331; // 4 bytes(-2, 147,483,648 to +2, 147,483,647)%d
    unsigned int k = 652133245; // 4 bytes (0 to +4, 294,967,295)%u
    // standard int are long int actually

    long long int l = 830974249324; //8bytes(-9 quintilion to +9 quintillion)%lld
    unsigned long long k = 342; // 8bytes (0 to +19 quintillion)%llu
    return 0;
    
}

