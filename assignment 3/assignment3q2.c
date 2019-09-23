#include<stdio.h>
int main()
{ int a,b,c,d,p,q,r;
	printf("enter any four no.s");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b){ p=a;}
	 if(b>a){p=b;}
	if(p>c){ q=p;}
	 if(c>p){ q=c;}
	 if(q>d){ r=q;}
	 if(d>q){ r=d;}
	printf("%d is biggest",r);}
