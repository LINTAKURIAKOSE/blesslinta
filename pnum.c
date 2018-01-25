#include<stdio.h>
void main()
{
int n,count=0,i;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
count++;
break;
}
}
if(count==0)
{
printf("yes");
}
else
{
printf("no");
}
}
