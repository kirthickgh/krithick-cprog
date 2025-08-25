#include <stdio.h>

int main() {
    int choice;
    float money, price;

    printf("===== VENDING MACHINE =====\n");
    printf("1. Chips    - Rs.20\n");
    printf("2. Soda     - Rs.30\n");
    printf("3. Chocolate- Rs.25\n");
    printf("4. Coffee   - Rs.15\n");
    printf("===========================\n");

    // Get user choice
    printf("Enter the item number: ");
    scanf("%d", &choice);

    // Set price based on choice
    switch(choice) {
        case 1: price = 20; break;
        case 2: price = 30; break;
        case 3: price = 25; break;
        case 4: price = 15; break;
        default:
            printf("Invalid selection.\n");
            return 0;
    }

    // Ask for money
    printf("Insert money: Rs.");
    scanf("%f", &money);

    if (money >= price) {
        printf("Dispensing your item...\n");
        if (money > price) {
            printf("Returning change: Rs.%.2f\n", money - price);
        }
    } else {
        printf("Insufficient funds! You need Rs.%.2f more.\n", price - money);
    }

    printf("Thank you for using the vending machine!\n");
    return 0;
}
