#include<stdio.h>
#include<conio.h>
void main()
{
int n,f,s=0,n=1,i;
printf("enter the numbers");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
f=n+s;
n=s;
s=f;
}
return 0;
}
