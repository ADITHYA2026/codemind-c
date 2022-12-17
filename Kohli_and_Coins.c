#include<stdio.h>
int main ()
{
    int a,n;
    scanf("%d",&n);
    if(n%5==0)
    {
    a=(n/10)+(n%10)/5;
    printf("%d",a);
    }
    else
    {
    printf("-1");
    }
}