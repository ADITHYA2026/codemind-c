#include<stdio.h>
#include<math.h>
void op(int x,int y)
{
    int s,d,p,q,r;
    s=x+y;
    printf("Sum:%d
",s);
     d=x-y;
    printf("Difference:%d
",d);
     p=x*y;
    printf("Product:%d
",p);
     q=x/y;
    printf("Quotient:%d
",q);
     r=x%y;
    printf("Remainder:%d
",r);
}
int main ()
{
    int x,y;
    scanf("%d %d",&x,&y);
    op(x,y);
}