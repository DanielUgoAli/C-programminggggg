#include <stdio.h>

int main(void){
    int month, day, yr, item_no;
    char slash0, slash1;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_no);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d%c%d%c%d", &month, &slash0, &day, &slash1, &yr);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%d\t$%0.2f\t%d%c%d%c%d", item_no, unit_price, month, slash0, day, slash1, yr);
    return 0;
}
