#include <stdio.h>
#include <conio.h>

void main() {
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("The number is Zero\n");
    else if (num % 2 == 0)
        printf("The number is Even\n");
    else
        printf("The number is Odd\n");

    getch();
}
