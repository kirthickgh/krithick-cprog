#include<stdio.h>

int main()
{
    int num , h, f , t ;

    printf ("enter number :");
    scanf("%d",&num);
     h = num/100;
    f = (num - h*100)/50;
    t = (num - (h*100)-(f*50))/10 ;
    printf("the hundred rs notes : %d \n",h);
    printf("the fifty rs notes is : %d \n", f);
    printf("the number of ten rs notes are : %d \n", t);
    return 0;
}
