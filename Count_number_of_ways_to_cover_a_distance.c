#include<stdio.h>
int tnw(int k)
{
    if(k<0)
    {
        return 0;
    }
    else if(k==0)
    {
        return 1;
    }
    return tnw(k-1)+tnw(k-2)+tnw(k-3);
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    i=tnw(n);
    printf("%d",i);
}