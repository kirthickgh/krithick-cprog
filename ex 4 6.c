#include <stdio.h>
int main() {
    int i, j, marks[4][5];
    printf("Enter marks of 4 students (5 subjects each):\n");
    for(i=0; i<4; i++) {
        printf("Student %d:\n", i+1);
        for( j=0; j<5; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    for(
        i=0; i<4; i++) {
        int total = 0;
        for(j=0; j<5; j++) {
            total += marks[i][j];
        }
        float avg = total / 5.0;
        printf("Student %d → Total = %d, Average = %.2f\n", i+1, total, avg);
    }
    return 0;
}
