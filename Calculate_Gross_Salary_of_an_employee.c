#include<stdio.h>
#include<math.h>
void cal(float a,float b,float c)
{
    float d,e;
    d=a*0.12;
    printf("%0.2f
",d);
    e=a+b+c+d;
    printf("%0.2f
",e);
}
int main ()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    cal(a,b,c);
}