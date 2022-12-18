#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,c,temp;
    temp=c;
    scanf("%d %d",&a,&b);
    c=21-(a+b);
    if(c>=1 && c<=10 && c!=0)
    printf("%d",c);
    else
    printf("-1");
}