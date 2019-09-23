#include<stdio.h>
int main()
{ int x,y;
        for(y=0;y<10;y++)
        {for(x=0;x<20;x++)
                if(x+y<8||(3+(2*y)<x&&y>1)||(y==0||y==1))
                {printf("*");}
                else
                        printf("0");
                printf("\n");
        }}


