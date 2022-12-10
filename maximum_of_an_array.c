#include<stdio.h>
#include<math.h>
int main ()
{
    int i,n,max;
    scanf("%d",&n);
    int a[n];
    max=-99999;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
}