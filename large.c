#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c)
{
printf("a is largest number");
}
elseif(b>=a&&b>=c)
{
printf("b is largest number");
}
else
{
printf("c is largest number");
}
}
