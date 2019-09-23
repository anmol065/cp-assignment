#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("Input a vector\n");
    scanf("%fi+%fj+%fk",&a,&b,&c);
    d=sqrt((a*a)+(b*b)+(c*c));
    printf("Unit vector: %.2fi+%.2fj+%.2fk\n",a/d,b/d,c/d);
}