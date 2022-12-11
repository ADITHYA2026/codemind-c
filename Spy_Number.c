#include<stdio.h>
int main ()
{
    int n,s=0,p=1,k;
    scanf("%d",&n);
    while(n>0)
    {
        k=n%10;
        s=s+k;
        p=p*k;
        n=n/10;
    }
    if(s==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}