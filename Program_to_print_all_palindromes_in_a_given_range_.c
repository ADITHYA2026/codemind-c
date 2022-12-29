#include<stdio.h>
int main ()
{
    int i,a,b;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int r,k=i,s=0;
        while(k>0)
        {
        r=k%10;
        k=k/10;
        s=s*10+r;
        }
        if(i==s)
        {
            printf("%d ",i);
        }
    }
}