#include<stdio.h>
int main()
{
    int n,i,k,max,s=0;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        s=0;
        s=s+a[i]+k;
        if(s>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}