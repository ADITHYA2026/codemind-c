#include<stdio.h>
#include<math.h>
int main ()
{
    int i,n,min;
    scanf("%d",&n);
    int a[n];
    min=99999;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);
}