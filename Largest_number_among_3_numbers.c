#include<stdio.h>
int fi(int a,int b,int c)
{
    if (a>b && a>c)
    return 1;
    else if (b>a && b>c)
    return 2;
}
int main () {
 int a,b,c,k;
 scanf("%d %d %d",&a,&b,&c);
 k=fi(a,b,c);
 if (k==1)
 printf("%d",a);
 else if (k==2)
 printf("%d",b);
 else
 printf("%d",c);
}