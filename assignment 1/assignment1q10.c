#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number");
	scanf("%d",&a);
	b=((a/100)*10 + (a%10))*10 + ((a%100)-(a%10))/10;
		printf("%d",b);
}

