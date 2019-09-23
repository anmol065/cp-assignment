#include<stdio.h>
#include<math.h>
int main()
{
	int  a,b,c,d; float dist;
	printf("enter the input for co-ordinates");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	dist=sqrt((a-c)*(a-c) + (b-d)*(b-d));
	printf("dist=%f",dist);
}

