#include<stdio.h>
int main ()
{
    int n,r,k,s=0;
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(s==k)
    printf("True");
    else
    printf("False");
}