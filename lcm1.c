#include<stdio.h>
int main()
{
  int n1,n2,a,b;
  printf("\nEnter two numbers:");
  scanf("%d %d",&n1,&n2);
  a=n1,b=n2;
  while(n1!=n2){
      if(n1>n2)
      {
           n1=n1-n2;
           }
      else
      {
      n2=n2-n1;
      }
  }
  printf("LCM = %d",a*b/n1);
  return 0;
}
