#include<stdio.h>
int main()
{
    int i, n, x,z=0 ,s=0;
    printf("Give n: ");
    scanf("%d", &n);
    printf("Give %d numbers: \n", n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if (x%2==0)
        {
            s=s+x*i;
            z=z+i;
        }
        
    }
    printf("OUTPUT: %.1f\n",(float)s/z);
}