#include<stdio.h>
int main()
{
	int a,b,c,m; printf("enter the data for line");
	scanf("%d%d%d",&a,&b,&c);
	if(b==0){printf("line is vertical");}
	else{ m=-b/a;
		printf("slope is %d",m);
	}}
