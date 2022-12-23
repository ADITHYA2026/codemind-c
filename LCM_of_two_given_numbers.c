#include<stdio.h>
int main()
{
    int a,b,i,l,k;
    scanf("%d %d",&a,&b);
    for(i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            k=i;
        }
    }
    l=(a*b)/k;
    printf("%d",l);
}