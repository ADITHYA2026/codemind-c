#include<stdio.h>
#include<math.h>
void sum(int a)
{
    int c;
    c=a*(a+1)*0.5;
    printf("%d",c);
}
int main ()
{
    int a;
    scanf("%d",&a);
    sum(a);
}