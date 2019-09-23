#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    printf("enter the 2 complex numbers:\n");
    scanf("%f+%fi %f+%fi",&a,&b,&c,&d);
    e=((a*c)+(b*d))/((c*c)+(d*d));
    f=(((b*c)-(a*d))/((c*c)+(d*d)));
    printf("\ndivision of complex numbers is: %.1f + %.1fi\n",e,f);
}