#include<stdio.h>
int cm(int a)
{
    float e;
    e=a*2.54;
    printf("%0.2f",e);
     return e;
}
int main () {
    int a;
    scanf("%d",&a);
    cm(a);
    
}