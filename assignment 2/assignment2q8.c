#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e;
	printf("enter the sides of triangle");
	scanf("%f%f%f",&a,&b,&c);
	d=acos((b*b + c*c -a*a)/(2*b*c));
	e=d*(180/3.14159265359);
printf("A(radian)=%f,A(degree)=%f",d,e);
}
