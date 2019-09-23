#include<stdio.h>
int main()
{
    int i,n,x,z,y,s1=0,s2=0,s4;
    printf("Give n: ");
    scanf("%d", &n);
    printf("Give %d numbers: \n", n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if ((x%10)<((x%100)/10))
        {
            z=x-(x%100)+((x%10)*10)+((x%100)/10);
            s1=s1+z;
        }
        else
        {
            y=x;
            s2=s2+y;
        }
        s4=s2+s1;
    }
    printf("OUTPUT: %d\n",s4);
}