#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  float d;
  printf("enter the numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  d = fmod(a*b,c);
  printf("%.0f\n",d);
  return 0;
  
}
