#include<stdio.h>
#include<math.h>
void pro(int a,int b,int c,int d)
{
    if (a>=10 && b>=10 && c>=10 && d>=10)
    printf("YES");
    else
    printf("NO");
}
int main () {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    pro(a,b,c,d);
}