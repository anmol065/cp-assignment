#include<stdio.h>
int main()
{
    int i, n, x,a,m,z=0,s=0,count=0;
    printf("Give n and m: ");
    scanf("%d%d", &n,&m);
    printf("Give %d groups of %d numbers: \n", n,m);
    for(i=1; i<=n; i++)
    {
        a=0;
        z=0;
        for (z=0;z<m;z++)
        {
            scanf("%d", &x);    //Enter the numbers as say m=3 -: 3 4 3  \n
            //printf("%d,",x);
            a=a+x;
        }
        s=s+a;

    }
    printf("OUTPUT: %d\n", s);
}