#include<stdio.h>
int main()
{
    int i, n, x,a,z,s=0;
    printf("Give n: ");
    scanf("%d", &n);
    printf("Give %d pairs of numbers: \n", n);
    for(i=1; i<=n; i++)
    {
        a=1;
        for (z=0;z<2;z++)
        {
            scanf("%d", &x);    //Enter the coordinates as say (3,4) =3 4
            a=a*x;
        }
        s=s+a;
    }
    printf("OUTPUT: %d\n", s);
}