#include<stdio.h>
int main()
{
        int x,n; printf("enter the limit upto which no.s appear");
	scanf("%d",&n);
        for(x=0;x<=n;x++)
        {if(((x%10)%3)==0)
                        printf("\n%d",x);}
                        }

