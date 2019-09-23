#include<stdio.h>
#include<math.h>
int main()
{
	int s,a,b,c; 
	float area;
printf("enter the sides of triangle");
scanf("%d\n%d\n%d",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area=%f",area);
}
