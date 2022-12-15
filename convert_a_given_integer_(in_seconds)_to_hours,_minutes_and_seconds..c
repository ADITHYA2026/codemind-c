#include<stdio.h>
#include<math.h>
void conv(int a)
{
    int h,m,c;
h=a/3600;
m=(a-h*3600)/60;
c=a-(h*3600+m*60);
printf("H:M:S-%d:%d:%d",h,m,c);
}
int main ()
{
    int a;
    scanf("%d",&a);
    conv(a);
}