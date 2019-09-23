#include<stdio.h>
#include<math.h>
int main()
{
	float h,k,r,s,d,l;
	printf("enter the data for centre and radius\nand s value for line x=s");
scanf("%f%f%f%f",&h,&k,&r,&s);
d=(h-s);
l=sqrt(r*r - d*d);
printf("chorld length=%f",(2*l));
}
