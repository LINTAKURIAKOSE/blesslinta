#include<stdio.h>
#include<string.h>
int main()
{
  char s[10],a,b;
  printf("enter the string\n");
  scanf("%s",s);
  a=strlen(s);
  if(s[a]%2==0)
  {
    b=a/2;
  s[b]='*';
  printf("%s",s);
  }
  else
  {
  b=a/2;
  s[b]='*';
  s[b-1]='*';
  }
  return 0;
  }
