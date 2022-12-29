#include<stdio.h>
int main ()
{
    int i,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int n,k,r,s=0;
        scanf("%d",&n);
        k=n;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            s=s*10+r;
        }
         if(s==k)
            printf("True
");
            else
            printf("False
");
    }
    
}