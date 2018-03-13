#include<stdio.h>
int main()
{
  int n,k,i,count=0;
  printf("enter n&k\n");
  scanf("%d%d",&n,&k);
  for(i=0;i<k;i++)
  {
 if(n==k*i)
 {
   count++;
 }
  }
 if(count==0)
 {
   printf("yes");
 }
 else
 {
  printf("no");
 }
 return 0;
}
