#include<stdio.h>
#include<conio.h>

int main()
{
int n;
printf("enter number : ");
scanf("%d",&n);

if(n>10000)
{
    n=n / 10000;
    printf("the leftmost digit is: %d \n",n);
    printf("tenthousands");
}
else if(n > 1000)
{
    n=n / 1000;
    printf("the leftmost digit is: %d \n",n);
    printf("thousands");
}
else if(n>100)
{
    n=n / 100;
    printf("the leftmost digit is: %d \n",n);
    printf("hundreds");
}
else if(n>10)
{
    n=n / 10;
    printf("the leftmost digit is: %d \n",n);
    printf("tens");
}
else
{
    printf("the leftmost digit is: %d \n",n);
    printf("ones");
}
    return 0;

}
