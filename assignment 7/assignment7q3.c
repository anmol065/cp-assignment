#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Input 4 Integers\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    printf("a= %-9.3f,b= %-9.3f\n",a,b);
    printf("c= %-9.5f,d= %-9.1f\n",c,d);
}