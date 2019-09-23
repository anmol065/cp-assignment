#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter the 2 complex numbers:\n");
    scanf("%f+%fi %f+%fi",&a,&b,&c,&d);
    printf("sum= %.1f+%.1fi\n",a+c,b+d);
}