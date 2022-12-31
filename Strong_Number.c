#include<stdio.h>
int main()
{
    int n,r,a=1,s=0,i,k;
    scanf("%d",&n);
    k=n;
    while(n)
    {
        i=1,a=1;
        r=n%10;
       while(i<=r)
        {
            a=a*i;
            i++;
        }
        s=s+a;
        n=n/10;
    }
    if(s==k)
    {
        printf("The number %d is a strong number",k);
    }
    else
    {
        printf("The number %d is not a strong number",k);
    }
}