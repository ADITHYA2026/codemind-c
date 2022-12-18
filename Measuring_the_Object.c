#include<stdio.h>
int main ()
{
    int a,b,c,d,x,y,z,w;
    scanf("%d %d %d %d",&x,&y,&z,&w);
    a=z+y;
    b=y+w;
    c=z+w;
    if (x==a|| x==b|| x==c||x==y||x==z||x==w)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}