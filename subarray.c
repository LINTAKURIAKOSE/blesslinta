#include<stdio.h>
void main()
{
  int a[10],b[10],i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++)
  {
  printf("%d%d",a[i],b[i]);
}
}
