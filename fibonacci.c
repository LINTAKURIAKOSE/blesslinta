#include<stdio.h>
void main()
{
int n1,n2=0,n3=1,n,i;
printf("enter the numbers");
scanf("%d",&n);
printf("fibonacci series is:");
printf("%d",n3);
for(i=2;i<=n;i++)
{
n1=n2+n3;
printf("%d",n1);
n2=n3;
n3=n1;
}
}
