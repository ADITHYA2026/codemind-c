#include<stdio.h>
int main ()
{
    int n,i,k,s=0,t=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
        k=i*i;
        t=t+k;
    }
    printf("%d",s*s-t);
}