#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main ()
{
char w;
printf("Enter the number or digit : ");
scanf(" %c",&w);

if (isdigit(w))
{
    printf("it is a digit \n ");
}
    else if (isalpha(w))
    {
        if (isupper(w))
        {
            printf("it is uppercase \n");
        }
        else  if (islower(w))
        {
            printf("it is lowercase \n");
        }


        if (w=='a' ||w=='e' ||w=='i' || w=='o' || w=='u' || w== 'A' || w=='E' || w=='I' || w=='O' || w=='U' )
        {
            printf("it is a vowel \n");
        }
        else
        {
            printf("consonant");
        }
    }
    return 0;
}
