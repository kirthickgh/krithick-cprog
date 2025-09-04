#include <stdio.h>
#include <conio.h>

void main() {
    int n, i = 1, sumNat = 0, sumOdd = 0, sumEven = 0;


    printf("Enter limit: ");
    scanf("%d", &n);

    while (i <= n) {
        sumNat += i;
        if (i % 2 == 0)
            sumEven += i;
        else
            sumOdd += i;
        i++;
    }

    printf("Sum of Natural Numbers = %d\n", sumNat);
    printf("Sum of Odd Numbers = %d\n", sumOdd);
    printf("Sum of Even Numbers = %d\n", sumEven);

    getch();
}
