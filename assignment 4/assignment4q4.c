#include<stdio.h>
int main()
{
        int x;
        for(x=20;x<81;x++)
        {if(((x>19)&&(x<41)&&x%2==0)||(x%2!=0)&&x>49)
                        printf("\n%d",x);}
                        }

