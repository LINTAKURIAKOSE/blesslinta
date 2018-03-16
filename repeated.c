#include<stdio.h>
#include<string.h>
void main()
{
  int n,a[10],i,j,count=0;
  printf("enter the number");
  scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n-1;i++)
 {
   count=0;
   for(j=i+1;j<n;j++)
   {
     if(a[i]==a[j])
     {
      printf("%d",a[i]);
 }
}
}
}
