#include<stdio.h>
int main ()
{
    int n,s=0,k,i;
    scanf("%d",&n);
    k=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    if(k<s)
    printf("True");
    else
    printf("False");
}