#include<stdio.h>
int main ()
{
    int l,r,k,i,c=0;
    scanf("%d %d %d",&l,&r,&k);
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        c=c+1;
    }
    printf("%d",c);
}