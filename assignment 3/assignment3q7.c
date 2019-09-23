#include<stdio.h>
#include<math.h>
int main()
{
        float a,b,c,r,r1,r2,d;
        printf("enter data for quadratic equation");
        scanf("%f%f%f",&a,&b,&c);
         d= b*b - 4*a*c;
        r1=(-sqrt(d)/(2*a));
        r2=(sqrt(d)/(2*a));
        r=((-1)*(b/(2*a)));
        if(d<0.000000)
         {printf("both roots imaginary \n%f%+fi and %f%+fi",r,(-sqrt(-d)/(2*a)),r,(sqrt(-d)/(2*a)));
         }
                 else if(d==0.000000)
        {printf("only one root %f",r);
        }

        else if(d>0)
        {printf("two roots exists that are \n%f and %f",(r+ r1 ),(r + r2));
	}}
