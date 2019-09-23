#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c; 
	float slope;
        printf("enter the coefficients and constant term for line ax+by+c=0\n");
        scanf("%d%d%d",&a,&b,&c);
	slope=(-1)*(a/b);
	printf("slope=%f",slope);
}


