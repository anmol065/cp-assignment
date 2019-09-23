#include<stdio.h>
int main()
{ int x,y;
        for(y=0;y<9;y++)
        {for(x=0;x<20;x++)
                if(x+y<8||x-y>3)
                {printf("*");}
                else
                        printf("0");
                printf("\n");
        }}

