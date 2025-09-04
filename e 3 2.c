#include <stdio.h>
#include <conio.h>

void main() {
    int units;
    float bill;
    clrscr();

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 5;
    else if (units <= 300)
        bill = (100 * 5) + (units - 100) * 7;
    else
        bill = (100 * 5) + (200 * 7) + (units - 300) * 10;

    printf("Total Electricity Bill = ₹%.2f\n", bill);

    getch();
}
