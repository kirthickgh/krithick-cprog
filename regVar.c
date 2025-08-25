#include <stdio.h>

int main(void) {
    auto int a;
    int r;  // plain local variable

    printf("Enter a value for auto variable: ");
    scanf("%d", &a);

    printf("Enter a value for register variable: ");
    scanf("%d", &r);

    printf("Initial auto variable a = %d\n", a);
    a += 5;
    printf("Modified auto variable a = %d\n", a);

    printf("Register variable r = %d\n", r);
    return 0;
}
