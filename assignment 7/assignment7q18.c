#include<stdio.h>
#include<math.h>
int main()
{
    int i, n, x, s=0;
    printf("Give n: ");
    scanf("%d", &n);
    printf("Give %d numbers for vector: \n", n);
    for(i=1; i<=n; i++)
    {
        scanf("%d,", &x);
        s=s+x*x;
    }
    printf("Magnitute: %.2f\n", sqrt(s));
}