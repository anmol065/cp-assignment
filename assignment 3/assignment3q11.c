#include<stdio.h>
int main()
{
	int a,b,c;
printf("enter any three no.s");
scanf("%d%d%d",&a,&b,&c);
	if(a>b){if(a>c){if(b>c){printf("%d",b);} else{printf("%d",c);}}
		else if(c>a){printf("%d",a);}}
else {if(b>c){if(a>c){printf("%d",a);} else{printf("%d",c);}}
                else if(c>b){printf("%d",b);}}}




