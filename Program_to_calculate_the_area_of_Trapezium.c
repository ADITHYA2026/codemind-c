#include<stdio.h>
#include<math.h>
float area(int a,int b,int c)
{
    float d;
    d=(a+b)*c*0.5;
    return d;
}
int main ()
{
    int a,b,c;
    float k;
    scanf("%d %d %d",&a,&b,&c);
    k=area(a,b,c);
    printf("%0.4f",k);
}