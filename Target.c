#include<stdio.h>
int pr(int a,int b,int c,int d)
{
    if (a>=10 && b>=10 && c>=10 &&d>=10)
    return 1;
}
int main () 
{
    int a,b,c,d,t;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    t=pr(a,b,c,d);
    if (t==1)
    printf("YES");
    else 
    printf("NO");
}