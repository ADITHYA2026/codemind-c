#include<stdio.h>
#include<math.h>
int th(int x,int y,int k)
{
    int z;
    z=(3*k)-(x+y);
  return z;
}
int main ()
{
    int x,y,k,wt;
    scanf("%d %d %d",&x,&y,&k);
    wt=th(x,y,k);
      printf("%d",wt);
}