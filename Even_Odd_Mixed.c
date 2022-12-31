#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        if(r%2 && n%2)
        {
            printf("Odd");
            return 0;
        }
        else if(r%2==0 && n%2==0)
        {
            printf("Even");
            return 0;
        }
        else
        {
            printf("Mixed");
            return 0;
        }
    }
}