#include<stdio.h>
int main()
{
        int x,n;
	printf("enter the limit upto which no. should appear\nno. should be more than 90");
	scanf("%d",&n);
        for(x=1;x<=n;x++)
        {if((x>49)&&(x<71)||x<21||x>=90)
                        printf("\n%d",x);}
                        }
