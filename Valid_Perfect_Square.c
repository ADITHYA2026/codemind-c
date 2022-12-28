#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k,w;
    float s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=sqrt(a[i]);
        w=s;
        if(w==s)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}