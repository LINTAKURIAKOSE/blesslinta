#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3=0,N=1,i;
printf("enter the numbers");
scanf("%d",&N);
for(i=2;i<=N;i++)
{
n1=n2+n3;
n2=n3;
n3=n1;
}
return 0;
}
