#include<stdio.h>
int sum(int n)
{
    int sn;
    sn=n*(n+1)*0.5;
    return sn;
}
int main()
{
    int n,a;
    scanf("%d",&n);
    a=sum(n);
    printf("%d",a);
}