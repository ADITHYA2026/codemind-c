#include<stdio.h>
int ar(int a,int b)
{
    int c;
    c=a*b*0.5;
    return c;
}
int main () {
int a,b,e;
scanf("%d %d",&a,&b);
e=ar(a,b);
printf("%d",e);
}