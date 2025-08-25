#include <stdio.h>

int main() {
    int day = 0;
    int answer;

    // Set 1 (bit 1)
    printf("Is your birthday in this set?\n");
    printf("{1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31}\n");
    printf("Enter 1 for YES, 0 for NO: ");
    scanf("%d", &answer);
    if(answer == 1) day += 1;

    // Set 2 (bit 2)
    printf("\nIs your birthday in this set?\n");
    printf("{2, 3, 6, 7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31}\n");
    printf("Enter 1 for YES, 0 for NO: ");
    scanf("%d", &answer);
    if(answer == 1) day += 2;

    // Set 3 (bit 3)
    printf("\nIs your birthday in this set?\n");
    printf("{4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31}\n");
    printf("Enter 1 for YES, 0 for NO: ");
    scanf("%d", &answer);
    if(answer == 1) day += 4;

    // Set 4 (bit 4)
    printf("\nIs your birthday in this set?\n");
    printf("{8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31}\n");
    printf("Enter 1 for YES, 0 for NO: ");
    scanf("%d", &answer);
    if(answer == 1) day += 8;

    // Set 5 (bit 5)
    printf("\nIs your birthday in this set?\n");
    printf("{16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31}\n");
    printf("Enter 1 for YES, 0 for NO: ");
    scanf("%d", &answer);
    if(answer == 1) day += 16;

    printf("\n🎉 Your birthday is on day %d!\n", day);

    return 0;
}
