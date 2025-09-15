#include <stdio.h>
int main() {
    int r1, c1, r2, c2, i, j, k;
    printf("Enter size of first matrix (rows cols): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter size of second matrix (rows cols): ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int a[r1][c1], b[r2][c2], mul[r1][c2];

    printf("Enter first matrix:\n");
    for(i=0; i<r1; i++)
        for( j=0; j<c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++)
            scanf("%d", &b[i][j]);

    for( i=0; i<r1; i++)
        for( j=0; j<c2; j++) {
            mul[i][j] = 0;
            for(k=0; k<c1; k++)
                mul[i][j] += a[i][k] * b[k][j];
        }

    printf("Resultant Matrix:\n");
    for( i=0; i<r1; i++) {
        for(j=0; j<c2; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }
    return 0;
}

