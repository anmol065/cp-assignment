#include<stdio.h>
int main()
{
    int i, n, x, s=0;
    printf("Give n: ");
    scanf("%d", &n);
    printf("Give %d numbers: \n", n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if (x%2==0)
        s=x;
    }
    printf("OUTPUT: %d\n", s);
}