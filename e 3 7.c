#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    int num, sum = 0, temp, rem, digits = 0, n;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    n = num;
    while (n != 0) {
        digits++;
        n /= 10;
    }

    n = num;
    while (n != 0) {
        rem = n % 10;
        sum += pow(rem, digits);
        n /= 10;
    }

    if (sum == temp)
        printf("%d is an Armstrong Number\n", temp);
    else
        printf("%d is Not an Armstrong Number\n", temp);

    getch();
}
