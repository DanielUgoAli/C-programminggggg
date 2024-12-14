#include <stdio.h>
#include <unistd.h>

int main(void){

    int day, month, yr, i;

    printf("Enter data (dd/mm/yyyy): ");
    scanf("%d / %d / %d", &day, &month, &yr);

    printf("Dated this %d", day);
    switch(day){
        case 1: case 21: case 31:
        printf("st");
        break;
        case 2: case 22:
        printf("nd");
        break;
        case 3: case 23:
        printf("rd");
        break;
        default: printf("th");
    }
    printf(" day of ");

    switch(month){
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
    }

    printf(", %d.\n", yr);
    // printf("%d / %d / %d", day, month, yr); Checking for something
    
    i = 10;
    while(i > 0){
    printf("T minus %d and counting\n", i--);
    if (i > 0)
        sleep(1); //Delay for 1 second
    }
    printf("\nLift-off!! Space X falcon heavy Successful!!\n");
    return 0;
}


