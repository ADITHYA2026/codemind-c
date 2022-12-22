#include<stdio.h>
int main ()
{
    int n,i,k,s=0;
    scanf("%d",&n);
    k=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    if(s==k)
    {
        printf("PERFECT");
    }
    else if(s<k)
    {
        printf("DEFICIENT");
    }
    else
    {
        printf("ABUNDANT");
    }
}