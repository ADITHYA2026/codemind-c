#include<stdio.h>
#include<math.h>
int mangoes(int x,int y,int z)
{
    int c;
    c=(z-y)/x;
     return c;
}
int main ()
{
    int x,y,z,k;
    scanf("%d %d %d",&x,&y,&z);
    k=mangoes(x,y,z);
    printf("%d",k);
}