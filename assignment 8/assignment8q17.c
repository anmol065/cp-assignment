#include<stdio.h>
int main()
{
    int i, n, x,z=0, s=0;
    printf("Give n: ");
    scanf("%d", &n);
    printf("Give %d numbers: \n", n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        z=z*x;
        s=s+z;
        z=x;
    }
    printf("OUTPUT: %d\n", s);
}