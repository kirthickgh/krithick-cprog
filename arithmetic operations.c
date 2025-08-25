#include <stdio.h>

int main() {
    float num1, num2;
    char operation;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch(operation) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operation. Please enter +, -, *, or /.\n");
    }

    return 0;
}
