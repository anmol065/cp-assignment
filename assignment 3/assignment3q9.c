#include<stdio.h>
int main()
{
	int a,b,c,d,x;
	printf("enter any five no.s");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
	if(a==x){printf("x is equal to a");}
	else if (b==x) {
		printf("x is equal to b");	
	}
		else if(x==c){printf("x is equal to c");}
		 else if(x==d){printf("x is equal to d");}
		 else{printf("x is not equal to any given no.");}
}
