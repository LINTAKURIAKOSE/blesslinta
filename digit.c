#include<stdio.h>
#include<conio>
void main()
{
int n,count=0;
printf("enter the integer value");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("number of digits",count);
return 0;
}
