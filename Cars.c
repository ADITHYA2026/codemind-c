#include<stdio.h>
int main ()
{
    int a,b,n;
    scanf("%d",&n);
    a=n/4;
    b=a+1;
    if(n%4==0)
    printf("%d",a);
    else
    printf("%d",b);
}