#include <stdio.h>

int main() {
    float T, C;
    printf("Enter the temperature in F: ");
    scanf("%f", &T);
    C = (T - 32) * 5.0 / 9.0;
    printf("The Celsius: %f\n", C);

    if (C >= 30) {
        printf("Hot\n");
    } else if (C >= 20) {
        printf("mid\n");
    } else {
        printf("cold\n");
    }

    return 0;
}
