#include<stdio.h>
#include<math.h>
void dis(int a,int b,int c,int d)
{
    float k;
    k=sqrt((c-a)*(c-a)+(d-b)*(d-b));
    printf("%0.4f",k);
}
int main ()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    dis(a,b,c,d);
}