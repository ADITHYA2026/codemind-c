#include<stdio.h>
float gs(int a)
{
    float d,h,ts;
    if (a<=10000)
    {
        d=0.8*a;
        h=0.2*a;
    }
    else if (a>10000 && a<=20000)
    {
        d=0.9*a;
        h=0.25*a;
    }
    else
    {
        d=0.95*a;
        h=0.3*a;
    }
    ts=a+d+h;
    return ts;
}
int main ()
{
    int a;
    float x;
    scanf("%d",&a);
    x=gs(a);
    printf("%0.2f",x);
}