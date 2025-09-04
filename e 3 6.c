#include <stdio.h>
#include <conio.h>

void main() {
    int num, rev = 0, rem, temp;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    printf("Reversed Number = %d\n", rev);
    if (rev == temp)
        printf("It is a Palindrome\n");
    else
        printf("Not a Palindrome\n");

    getch();
}
