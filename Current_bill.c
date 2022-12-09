#include<stdio.h>
float cb(int a)
{
    float c;
    if(a<=200)
    c=a*1.20;
    else if (a>=200 && a<400)
    c=a*1.50;
    else if (a>=400 && a<600)
    c=a*1.80;
    else if (a>600)
    c=a*2.00;
   if (c>400)
    {
    c=c+c*0.15;
    return c;
    }
    else 
    c=c+100;
    return c;
}
int main () 
{
   int a;
   float k;
   scanf("%d",&a);
   k=cb(a);
   printf("%0.2f",k);
}