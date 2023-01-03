#include<stdio.h>
float ar(float a)
{
    float area;
    area=3.14*a*a;
    return area;
}
float pr(float a)
{
    float per;
    per=2*3.14*a;
    return per;
}
int main()
{
    float a,b,c;
    scanf("%f",&a);
    b=ar(a);
    c=pr(a);
    printf("%0.2f
%0.2f
",b,c);
}