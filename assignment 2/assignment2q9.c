#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,f,g,h,R,r,D,A;
	printf("enter the data for plane and sphere");
	scanf("%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h);
	D=(-a*e/2 - b*f/2 - c*g/2 + d)/(sqrt(a*a + b*b + c*c));
	R=sqrt((e*e + f*f + g*g)/4 - h);
	r=sqrt(R*R - D*D); A=(3.14*r*r);
	printf("area of circle of intersection of plane \nand sphere=%f",A);
}
	
