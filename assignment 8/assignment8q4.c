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
        s=s+((x/100)*10+(x%10));
    }
    printf("OUTPUT: %d\n", s);
}