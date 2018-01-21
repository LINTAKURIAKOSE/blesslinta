#include<stdio.h>
void main()
{
int n,i,sum=0,a[10];
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    sum=sum+a[i];
}
scanf("%d",&a[i]);
printf("sum of numbers = %d\n",sum);
if(i/2==1)
{
    printf("odd\n");
     sum=sum+i;
 
}
else
{
    printf("even\n");
     sum=sum+i;
}
}
