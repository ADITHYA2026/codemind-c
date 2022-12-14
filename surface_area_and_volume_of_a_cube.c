#include<stdio.h>
#include<math.h>
void area(float a)
{
    int c,d;
    c=6*a*a;
    d=a*a*a;
    printf("Surface area = %d and Volume = %d",c,d);
    }
    int main ()
    {
    int a;
    scanf("%d",&a);
    area(a);
    }