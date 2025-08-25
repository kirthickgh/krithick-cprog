#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);   // Reads one word (no spaces)

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n--- User Details ---\n");
    printf("Name: %s\n", name);
    printf("Age : %d\n", age);

    return 0;
}

