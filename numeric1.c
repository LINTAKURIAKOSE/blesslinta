#include<stdio.h>
#include<string.h>
int main()
{
  int i=0,flag=0;
  char a[10];
  scanf("%s",a);
  while(a[i]!='\0')
  {
  if((a[i]>='a')&&(a[i]<='z'))
  {
    flag=1;
  }
  i++;
}
    if(flag==0)
    {
    printf("yes");
    }
  else
  {
    printf("no");
  }
  return 0;
}
