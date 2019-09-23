#include<stdio.h>
int main()
{
        int a,b,c,d,e;
        printf("enter a number");
        scanf("%d",&a);        
	b=a/100;
	c=b*100;
	d=a-c;
	e=d/10;

        printf("%d",e);
}

