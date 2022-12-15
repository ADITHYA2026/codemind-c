#include<stdio.h>
#include<math.h>
void rad(int a)
{
    float c,d;
    c=3.14*a*a;
    d=2*3.14*a;
    printf("%0.2f
",c);
    printf("%0.2f
",d);
    
}
int main ()
{
    int a;
    scanf("%d",&a);
    rad(a);
}
