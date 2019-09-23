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
        if ((x>30)&&(x<90))
        s=x+s;
    }
    printf("OUTPUT: %d\n", s);
}