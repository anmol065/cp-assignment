#include<stdio.h>
int main()
{ int x,y;
        for(y=0;y<10;y++)
        {for(x=0;x<20;x++)
                if((y<5&&y%2==0)||(y>4&&x>3&&x<14&&y%2!=0)||(y>4&&y%2==0))
                {printf("*");}
                else
                        printf("0");
                printf("\n");
        }}

