#include<stdio.h>
int main()
{
	int a,b,c,A; printf("enter the sides of the triangle");
	scanf("%d%d%d",&a,&b,&c);
	if( a*a == b*b + c*c)
	{      printf("angle A is 90 degrees");
	}
	else{printf("angle A is not 90 degrees");}
}
