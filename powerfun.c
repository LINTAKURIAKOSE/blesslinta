#include<stdio.h>
int main()
{
  int n,a=2,flag=0,i;
  printf("enter the number\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    a=2*a;
  if(n==a)
  {
    flag=1;
    printf("yes");
    break;
  }
  }
if(flag=0)
  {
    printf("no");
  }
  return 0;
}
