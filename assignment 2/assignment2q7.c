#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,p,q,r,x,y;
	printf("enter the coefficients and constants for two equations\n");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&p,&q,&r);
	x=(b*r - c*q)/(a*q - p*b);
	y=(a*r - c*p)/(b*p - q*a);
	printf("intersection point=(%f,%f)",x,y);
}

