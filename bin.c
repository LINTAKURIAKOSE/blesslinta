#include<stdio.h>
#include<string.h>
void main()
{
  int c,i,str[10],count=0;
  printf("enter the string\n");
  scanf("%d",&c);
  for(i=0;i<'\0';i++)
  {
    count++;
  }
  for(i=0;i<count;i++)
  if(str[i]=='0'||str[i]=='1')
  {
    c++;
  }
  if(i==count)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
