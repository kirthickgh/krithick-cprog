#include <stdio.h>
#include <conio.h>

void main() {
    int n, i;
    float basic, da, hra, tax, net, gross;


    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nEnter Basic Salary of Employee %d: ", i);
        scanf("%f", &basic);

        da = 0.10 * basic;
        hra = 0.20 * basic;
        gross = basic + da + hra;
        tax = 0.05 * gross;
        net = gross - tax;

        printf("Employee %d:\n", i);
        printf("Basic = %.2f, DA = %.2f, HRA = %.2f\n", basic, da, hra);
        printf("Gross = %.2f, Tax = %.2f, Net Salary = %.2f\n", gross, tax, net);
    }

    getch();
}

