#include<stdio.h>
int main ()
{
    int n,i;
    float k,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1.0/i;
        s=s+k;
    }
    printf("%.2f",s);
}