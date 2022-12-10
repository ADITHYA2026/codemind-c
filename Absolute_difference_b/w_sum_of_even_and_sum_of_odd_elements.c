#include<stdio.h>
#include<math.h>
int main ()
{
    int n,i,s=0,su=0,ad;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%2!=0)
        s=s+a[i];
        else if(a[i]%2==0)
        su=su+a[i];
        ad=abs(s-su);
    }
    printf("%d",ad);
}