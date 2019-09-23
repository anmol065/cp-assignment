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
        if (z==1)
        s=s+x;
        if (x%2==0)
        z=1;
    }
    printf("OUTPUT: %d\n", s);
}