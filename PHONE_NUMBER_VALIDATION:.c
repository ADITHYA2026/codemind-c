#include<stdio.h>
int main()
{
    int n,c=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        n=n/10;
        c++;
        if(c==10 && n==0)
        {
            c--;
        }
    }
    if(c==9)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}