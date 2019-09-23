#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float P,Q;
    printf("To find the roots P and Q of the  ax^2 + bx + c = 0\nInput a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if (c<(float)pow(b,2)/(float)(4*a))
    {
        P=(sqrt((float)pow(b,2)/4-a*c)-(float)b/2)/a;
        Q=((float)(-b)/(float)a)-P;
        if (P!=Q) printf("Roots are: %.1f, %.1f\n",P,Q);
        else if (P==Q) printf("roots are equal: %.1f\n",P);
    }
    if (c>(float)pow(b,2)/(float)(4*a))
    {
        printf("Roots are complex\n");
        printf("Roots are: %.1f +-%.1fi\n",(float)(-b)/(float)(a*2),((float)(sqrt(a*c-(float)pow(b,2)/4))/(float)a));
    }
}