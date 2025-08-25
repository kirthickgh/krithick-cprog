#include <stdio.h>

int main() {
    int num1, num2, mul;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate sub
    mul = num1 * num2;

    // Display result
    printf("mul = %d\n", mul);

    return 0;
}
