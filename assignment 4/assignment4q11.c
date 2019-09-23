#include<stdio.h>
int main()
{
        int x;
        for(x=0;x<100;x++)
        {if((((x/10)+(x%10))%7==0))
                        printf("\n%d",x);}
                        }

