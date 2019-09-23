#include<stdio.h>
int main()
{
    int a,b;
    printf("Input the complex Number\n");
    scanf("%d+%di",&a,&b);
    if (((a==0)&&(b!=1))&&(b!=0)) printf("%di",b);
    else if ((a==0)&&(b==1)) printf("i");
    else if ((a!=0)&&(b==1)) printf("%d+i",a);
    else if (b==0) printf("%d",a);
    else if ((a==0)&&(b==0)) printf("0");
    else if ((a!=0)&&(b!=0)) printf("%d+%di",a,b);
    printf("\n");
}