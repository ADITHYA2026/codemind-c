#include<stdio.h>
int tri(int a,int b,int c)
{
    if (a==b && b==c &&c==a)
    return 1;
    else if (a==b || a==c || b==c)
    return 2;
}
int main () {
    int a,b,c,k;
    scanf("%d %d %d",&a,&b,&c);
    k=tri(a,b,c);
    if (k==1)
    printf("Equilateral triangle");
    else if (k==2)
    printf("Isosceles triangle");
    else 
    printf("Scalene triangle");
}