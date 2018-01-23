#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n%2==0)
{
    printf("nearest number%d",n-2);
}
else
{
    printf("nearest numbe%d",n-1);
}
}
