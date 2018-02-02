#include<stdio.h>
int main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
while(n%10!=0)
{
    n++;
    printf("%d\n",n);
}
return 0;
}

