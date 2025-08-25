#include<stdio.h>

int main()
{
    float R;
    printf("Rating ? : \n");
    scanf("%f", &R);
    if (R >= 90.0)
    {
        printf("Must watch\n");
    }
    else if (R >= 70.0)
    {
        printf("Good movie\n");
    }
    else if (R >= 50.0)
    {
        printf("Average\n");
    }
    else
    {
        printf("Skip it\n");
    }
    return 0;
}
