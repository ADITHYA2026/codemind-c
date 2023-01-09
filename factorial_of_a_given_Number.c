#include<stdio.h>
int main () {
    int i,n;
    scanf("%d",&n);
    int m=1;
    for(i=n;i>=1;i--)
    m=m*i;
    printf("%d",m);
}