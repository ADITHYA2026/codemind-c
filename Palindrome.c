#include<stdio.h>
int main()
{
	int i,n,k,r=0;
	scanf("%d",&n);
	k=n;
	while(n>0)
	{
	i=n%10;
	r=(r*10)+i;
	n=n/10;
	}
	if(k==r)
	printf("True");
	else
    printf("False");
}