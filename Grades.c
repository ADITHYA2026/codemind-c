#include<stdio.h>
int cal(int p,int c,int b,int m,int cs)
{
    int a;
    a=(p+c+b+m+cs)/5;
    if (a>=90)
    return 1;
    else if (a>=80)
    return 2;
    else if (a>=70)
    return 3;
    else if (a>=60)
    return 4;
    else if (a>=40)
    return 5;
    else if (a<40)
    return 6;
}
int main () {
  int p,c,b,m,cs,k;
  scanf("%d %d %d %d %d",&p,&c,&b,&m,&cs);
  k=cal(p,c,b,m,cs);
  if (k==1)
  printf("Grade A");
  if (k==2)
  printf("Grade B");
  if (k==3)
  printf("Grade C");
  if (k==4)
  printf("Grade D");
  if (k==5)
  printf("Grade E");
  if (k==6)
  printf("Grade F");
}