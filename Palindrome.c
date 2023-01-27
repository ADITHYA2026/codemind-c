#include<stdio.h>
int main () {
    int i,a,r=0,o;
    scanf("%d",&a);
    o=a;
    while(a>0)
{
    i=a%10;
    r=(r*10)+i;
    a=a/10;
}    
if (o==r)
printf("Palindrome");
else
printf("Not Palindrome");
}