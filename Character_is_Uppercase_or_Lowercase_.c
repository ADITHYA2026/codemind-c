#include<stdio.h>
int ul(char a)
{
    if (a>='A' && a<='Z')
    return 1;
    else if (a>='a' && a<='z')
    return 2;
    else
    return 3;
}
int main () {
    char a,k;
     scanf("%c",&a);
     k=ul(a);
     if (k==1)
     printf("uppercase alphabet");
     else if (k==2)
     printf("lowercase alphabet");
     else if (k==3)
     printf("not an alphabet");
}