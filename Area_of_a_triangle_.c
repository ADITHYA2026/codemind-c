#include<stdio.h>
#include<math.h>
void area(int a,int b)
{
    int c;
    c=a*b*0.5;
    printf("%d",c);
}
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    area(a,b);
}