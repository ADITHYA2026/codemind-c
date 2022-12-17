#include<stdio.h>
int main ()
{
    int n,m,k,f;
    scanf("%d %d %d",&n,&m,&k);
    f=m*k;
    if(f>=n)
    printf("YES");
    else
    printf("NO");
}