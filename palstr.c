#include<stdio.h>
#include<string.h>
int  main()
{
char a;
int rev=0;
printf("enter the string");
scanf("%s",a);
while(a!=0)
{
rev=(rev*10)+(a%10);
a=a%10;
}
if(rev==a)
{
printf("yes");
}
else
{
printf("no");
}
}

