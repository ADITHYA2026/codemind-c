#include<stdio.h>
int main ()
{
    int i,s=1;
    int a[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        s=s*a[i];
    }
    printf("%dKB",s);
}