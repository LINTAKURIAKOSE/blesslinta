#include<stdio.h>
#include<string.h>
void main()
{
  int n,i,s[10],count=0;
  printf("enter the string\n");
  scanf("%d",&n);
  for(i=0;i<'\0';i++)
  {
    count++;
  }
  for(i=0;i<count;i++)
  if(s[i]=='0'||s[i]=='1')
  {
    n++;
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
