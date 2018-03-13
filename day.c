#include<stdio.h>
void main()
{
  char c[10];
  int i;
  printf("enter the day");
  scanf("%c",c);
  for(i=0;i<10;i++)
  {
    scanf("%d",&c[i]);
  }
  if(c[0]=='s')
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
