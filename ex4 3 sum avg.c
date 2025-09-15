#include <stdio.h>
int main() {
    int r, i, j , c, sum = 0, count = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    printf("Enter elements:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
            count++;
        }
    }
    float avg = (float)sum / count;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
