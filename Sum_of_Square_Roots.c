#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,i;
    float c,s=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=sqrt(i);
        s=s+c;
    }
    printf("%.2f",s);
}