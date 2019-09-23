#include<stdio.h>
int main()
{
    int k,n,a,s=0,i,z=0;
    printf("Input the value of 'n' and n complex number\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d+%di",&k,&a);   //input complex numbers as 2+3i 7+4i
        s=s+k;
        z=z+a;
    }
    printf("SUM: %d+%di\n",s,z);
}