#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int w , b , f , h ;
    printf(" enter withdrawl amount in Multiples of 100: ");
    scanf(" %d", &w);
    printf(" enter balance amount : ");
    scanf(" %d", &b);

if (b < w )
    {
        printf("the amount cannot be withdrawed due to shortage of minimum balance");
    }



 else if  (b > 1000.0){

    printf("TRANSACTION IN PROGRESS....\n");
       f = w/500;
       h = w%500/100;
       printf("the no of 500s : %d \n", f);
       printf("the no of 100s : %d \n", h);

}
else if (b < 1000 )
    {
        printf("the amount cannot be withdrawed due to shortage of minimum balance");
    }


 return 0;

}
