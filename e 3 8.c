#include <stdio.h>
#include <conio.h>

void main() {
    int marks[5], i, total = 0, fail = 0;
    float avg;


    printf("Enter marks in 5 subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
        if (marks[i] < 35)
            fail = 1;
    }

    avg = total / 5.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", avg);

    if (fail) {
        printf("Result: Fail\nGrade: No Grade\n");
    } else {
        printf("Result: Pass\n");
        if (avg >= 80)
            printf("Grade: O (Distinction)\n");
        else if (avg >= 60)
            printf("Grade: A\n");
        else if (avg >= 41)
            printf("Grade: B\n");
        else
            printf("Grade: C\n");
    }

    getch();
}
