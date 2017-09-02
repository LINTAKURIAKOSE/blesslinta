#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
rev=(rev*10)+(n%10);
n=n%10;
}
if(rev==n)
{
printf("%d number is palindrpme",n);
}
else
{
printf("%d number not palindrome",n);
}
return 0;
}
