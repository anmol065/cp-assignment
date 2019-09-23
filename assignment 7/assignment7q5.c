#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    printf("Input 2 vectors\n");
    scanf("%fi+%fj+%fk %fi+%fj+%fk",&a,&b,&c,&d,&e,&f);
    printf("Dot Product: %.1f",a*d+b*e+f*c);
}