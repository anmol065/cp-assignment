#include<stdio.h>
unsigned int main()
{ unsigned int x,y;
        for(y=0;y<11;y++)
        {for(x=0;x<17;x++)
                if(7-(2*y)<x&&9+(2*y)>x)
                {printf("*");}
                else
                        printf("0");
                printf("\n");
        }
}
