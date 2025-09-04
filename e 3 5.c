#include <stdio.h>
#include <conio.h>

void main() {
    int n, i = 1, fact = 1;


    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        fact *= i;
        i++;
    } while (i <= n);

    printf("Factorial = %d\n", fact);

    getch();
}
