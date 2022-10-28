#include<stdio.h>
/*int sum(int x, int y);    function decalaration */
int sum (int x, int y)   /* function defition */
{
    int s;
    s=x+y;
}
int main ()
{
int a,b,s;
printf("enter the value of a and b:");
scanf("%d%d",&a,&b);
s=sum(a,b);    /* function calling */
printf("the sum of %d and %d is %d:",a,b,s);
return 0;
}