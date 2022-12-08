#include<stdio.h>
int wn(int n)
{
    if (n%2==1)
    return 1;
    else if (n%2==0 && n==2 || n==4 || n>20)
    return 2;
    else if (n%2==0 && n>=6 && n<=20)
    return 3;
}
int main () {
    int n,k;
    scanf("%d",&n);
    k=wn(n);
    if (k==1)
    printf("weird");
    else if (k==2)
    printf("not weird");
    else if (k==3)
    printf("weird");
}