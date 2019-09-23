#include<stdio.h>
void main()
{
    int i,x,k;
    printf("enter the number 'n' and the value of 'k' respectively.\n");
    scanf("%d %d",&x,&k);
    for(i=0;i<k-1;i++)
    {
        x=x/10;             
    }
    printf("%dth digit of number from right: %d\n",k,x%10);
}
