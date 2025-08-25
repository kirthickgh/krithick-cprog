#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

int main()
{
char c , pre , nex ;
printf("enter the lower case character (a-z):");
scanf("%c",&c);

if  (c>='a'&& c<='z')
{
    printf("the character exists \n");
}
if (c=='a')
{
    printf( "the previous character is z and the next one is b \n");
}
else if (c=='z')
{
    printf("the previous character is y and the next one is a \n");
}
else
{
    pre = c - 1;
    nex = c + 1;
    printf("the previous character is %c and the next one is %c",pre,nex);

}
return 0;
}
