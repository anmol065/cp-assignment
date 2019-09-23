#include<stdio.h>
int main()
{
        int x,n; 
	printf("enter the limit to which even number appears");
	scanf("%d",&n);
        for(x=1;x<=n;x++)
        {if((x%2!=0)&&(x<50)||((x%2==0)&&(x>50)&&x<=n))
                        printf("\n%d",x);}
                        }

