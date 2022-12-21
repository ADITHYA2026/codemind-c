#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,p1,l,temp,f=0,r=0,d;
    scanf("%d %d",&n,&k);
    p1=pow(10,k);
    l=n%p1;
    while(n>0)
    {
        r=r*10+n%10;
        n/=10;
    }
    temp=r%p1;
    while(temp>0)
    {
       f=f*10+temp%10;
        temp/=10;
    }
    d=abs(l-f);
    printf("%d",d);
}