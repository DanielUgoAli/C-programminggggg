#include <stdio.h>

int main(void){
    int mm, dd, yyyy;
    char slash0, slash1;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d%c%d%c%d", &mm, &slash0, &dd, &slash1, &yyyy);

    printf("You entered the date %d%c%02d%c%d\n", yyyy, slash0, mm, slash1, dd);
    printf("(The actual work)You entered the date %d%02d%d", yyyy, mm, dd);
    return 0;
}

