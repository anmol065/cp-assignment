#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input a number\n");
    scanf("%1d%10d",&a,&b);
    printf("Input a number\n");
    scanf("%1d",&c);
    printf("Its 2st digit is: %d\n",c*a);
}
