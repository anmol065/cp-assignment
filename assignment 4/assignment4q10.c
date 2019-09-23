#include<stdio.h>
int main()
{
        int x,n; printf("enter the limit upto which no. should appear");
	scanf("%d",&n);
        for(x=0;x<=n;x++)
        {if(4<(x%10)&&(x%10)<9)
                        printf("\n%d",x);}
                        }

