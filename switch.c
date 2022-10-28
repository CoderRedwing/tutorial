#include<stdio.h>
int  main ()
{
    while (1)
    {
    int n,a,b,sum;
    printf("enter the value of n ");
    scanf("%d",&n);
    
    switch (n)
    {
    case 1:
      printf("enter the value of a and b"); 
        scanf("%d %d",&a,&b);
       sum=a+b;
       printf("the sum of a+b= %d",sum); 
        break;
    case  2:
     printf("enter the value of n");
    scanf("%d",&n);
    if(n%2==0)
    printf("the number you enterd is even");
    else
    printf("the number you enterd is odd");
    break;
    case 3 :
    for(int i=0; i<10; i++)
     printf("%d ",i);
     break;
     default :
     printf("you entered wrong choice"); 
    }
    }
}  