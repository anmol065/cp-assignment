#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e; float dist;
	printf("enter the co-ordinate and line data");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	dist=(a*c + b*d + e)/(sqrt(c*c + d*d));
       printf("distance=%f",dist);	
}

