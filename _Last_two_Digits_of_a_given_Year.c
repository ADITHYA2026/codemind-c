#include<stdio.h>
#include<math.h>
void la(int a)
{
    int c;
    c=a%100;
    printf("%02d",c);
}
int main ()
{
    int a;
    scanf("%d",&a);
    la(a);
}