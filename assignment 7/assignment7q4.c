#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Input 2 Coordinates\n");
    scanf("(%f,%f) (%f,%f)",&a,&b,&c,&d);
    printf("mid Point: (%.1f,%.1f)\n",(a+c)/2,(b+d)/2);
}