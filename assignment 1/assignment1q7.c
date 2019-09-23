#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter the number");
	scanf("%d",&a);
	b=a%100;
	c=b/10;
	d=a%10;
	e=c+d;
	printf("%d",e);
}
	

