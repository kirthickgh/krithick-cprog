#include <stdio.h>
int main() {
    int i;
    int arr[5] = {10, 20, 30, 40, 50};  // static initialization
    printf("Array elements:");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

