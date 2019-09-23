#include<stdio.h>
int main()
{
        int x;
        for(x=0;x<100;x++)
        {if((((x/10)%2==0)&&x%2!=0)||((x/10)%2!=0&&x%2==0))
                        printf("\n%d",x);}
                        }

