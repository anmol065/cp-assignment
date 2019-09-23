#include<stdio.h>
int main()
{
	int a,b,c,d,e,f; float area;
	printf("enter the co-ordinates of tianle vertices");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	area=(a*d +c*f + e*b - a*f - e*d - c*b)*(0.5);
	printf("area=%f",area);
}

