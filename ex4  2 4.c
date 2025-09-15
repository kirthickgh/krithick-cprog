#include <stdio.h>
int main() {
    int r, i ,j, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    printf("Enter elements:\n");
    for( i=0; i<r; i++) {
        for( j=0; j<c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Even numbers: ");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            if(arr[i][j] % 2 == 0) {
                printf("%d ", arr[i][j]);
            }
        }
    }

    printf("\nOdd numbers: ");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            if(arr[i][j] % 2 != 0) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    return 0;
}
