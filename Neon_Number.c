#include<stdio.h>
int main ()
{
    int n,r,s=0,k;
    scanf("%d",&n);
    k=n*n;
    while(k>0)
    {
        r=k%10;
        k=k/10;
        s=s+r;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}