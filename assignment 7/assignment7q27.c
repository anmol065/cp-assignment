#include<stdio.h>
void main()
{
    int a,s;
    printf("Enter the number: ");
    scanf("%d",&a);
    while(a>0)
    {
        if(((a%10)%2)==0)
         {
           s=a%10;
         }
        a=a/10;
    }
     printf("1st even Digit is: %d\n",s);
}

