#include<stdio.h>
#include<math.h>
int sum(int a)
{
    int c;
    c=a*(a+1)*0.5;
    return c;
}
int main ()
{
    int a,k;
    scanf("%d",&a);
    k=sum(a);
    printf("%d",k);
}