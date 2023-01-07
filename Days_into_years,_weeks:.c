#include<stdio.h>
int main () {
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
b=a/365;
printf("%d
",b);
c=(a-365*b)/7;
printf("%d
",c);
}
