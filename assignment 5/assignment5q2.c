#include<stdio.h>
int main()
{ float x,y;
        for(y=0;y<10;y++)
        {for(x=0;x<20;x++)
                if(y/3<1&&(x<8)||(((y/3)>2)&&(x>14)))
                {printf("0");}
                else
                        printf("*");
                printf("\n");
        }}


