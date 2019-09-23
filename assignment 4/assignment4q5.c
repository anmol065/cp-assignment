#include<stdio.h>
int main()
{
        int x,n;
	printf("write a limit upto which number appears");
	scanf("%d",&n);
        for(x=1;x<=n;x++)
        {if((x%3==0)||(x%7==0))
                        printf("\n%d",x);}
                        }

