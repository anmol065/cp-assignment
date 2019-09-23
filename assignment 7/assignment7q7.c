#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,i,j,k;
    printf("enter the 2 vectors:\n");
    scanf("%fi+%fj+%fk %fi+%fj+%fk",&a,&b,&c,&d,&e,&f);
    i=(b*f)-(e*c);
    j=(c*d)-(a*f);
    k=(a*e)-(d*b);
    printf("%.1fi+%.1fj+%.1fk\n",i,j,k);
}