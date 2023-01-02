#include<stdio.h>
#include<math.h>
float dis(float a,float b,float c,float d)
{
    float k;
    k=sqrt((c-a)*(c-a)+(d-b)*(d-b));
 return k;
}
int main ()
{
    float a,b,c,d;
    float distance;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    distance=dis(a,b,c,d);
       printf("%0.4f",distance);
}