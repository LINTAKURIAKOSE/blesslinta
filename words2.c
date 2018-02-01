#include<stdio.h>
int main()
{
char a[20],count;
int i,j;
printf("enter the string");
for(i=0;i<=20;i++)
{
scanf("%d",&a);
}
for(j=0;j!='\0';j++)
{
if(a[j]==' ')
{
count++;
}
}
printf("number of words is %d",count+1);
  return 0;
}
