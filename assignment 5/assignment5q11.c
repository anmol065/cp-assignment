#include<stdio.h>
int main()
{int x,y;
	for(y=0;y<10;y++)
	{for(x=0;x<15;x++)
		if((y%2!=0&&x>(y)&&x%2==0)||((y!=0&&y%2==0&&x%2==0&&x>y)||(y!=0&&y%2==0&&x<y))||(y==0&&x%2==0&&x>1))
		{printf("*");}
		else
			printf("0");
		printf("\n");}}
