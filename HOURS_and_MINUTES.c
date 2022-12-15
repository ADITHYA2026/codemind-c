#include<stdio.h>
#include<math.h>
void conv(int a)
{
    int b,c;
    b=a/60;
    c=(a-b*60);
    printf("%d Hour(s) %d Minute(s)",b,c);
}
int main ()
{
    int a;
    scanf("%d",&a);
    conv(a);
}