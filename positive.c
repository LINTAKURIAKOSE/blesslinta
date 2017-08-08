#include<stdio.h>
void main()
{
int num;
printf("enter the number");
scanf("%d",&num);
if(num>0)
{
printf("positive number");
}
elseif(num<0)
{
printf("negative number");
}
else
{
return 0;
}
}
