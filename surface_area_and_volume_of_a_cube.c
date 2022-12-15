
#include<stdio.h>
float su(float a)
{
    float sa;
    sa=6*a*a;
    return sa;
}
float vo(float a)
{
    float vol;
    vol=a*a*a;
    return vol;
}
int main () {
  float a,b,c;
  scanf("%f",&a);
  b=su(a);
  c=vo(a);
  printf("Surface area = %0.0f and Volume = %0.0f
",b,c);
}
