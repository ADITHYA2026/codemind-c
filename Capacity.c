#include<stdio.h>
int kb(int s,int t,int b)
{
    
    int c,k;
    c=1024*s*t*b;
    k=s*t*b;
    return k;
}
int main () {
   
    int s,t,b,tk;
    scanf("%d %d %d",&s,&t,&b);
    tk=kb(s,t,b);
    printf("%d KB",tk);
    
}