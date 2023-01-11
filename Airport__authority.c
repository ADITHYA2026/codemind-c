#include<stdio.h>
int main ()
{
    int n,t,i,s=0;
    scanf("%d
",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d
",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]<=t)
        {
            s=s+1;
        }
        else
        {
            s=s+2;
        }
    }
    printf("%d",s);
}