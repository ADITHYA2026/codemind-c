#include<stdio.h>
#include<math.h>
int main () 
{
int n,i,f=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if (n%i==0)
f++;
}
if (f==2)
printf("Prime");
else
printf("Not Prime");
}