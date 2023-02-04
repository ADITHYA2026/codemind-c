#include<stdio.h>
#include<math.h>
int main ()
{
    int n,r1,r2,s1=0,s2=0,k,m;
    scanf("%d",&n);
    k=n*n;
    while(k>0)
    {
        r1=k%10;
        k=k/10;
        s1=s1*10+r1;
    }
    m=sqrt(s1);
    while(m>0)
    {
        r2=m%10;
        m=m/10;
        s2=s2*10+r2;
    }
    if(s2==n)
    printf("True");
    else
    printf("False");
}