#include<stdio.h>
#include<string.h>
int main()
{
  char s[10];
  int count=0,count1=0,l,i;
  printf("enter number");
  scanf("%s",&s);
  l=strlen(s);
  for(i=0;s[i]=='\0';i++)
  {
    if(s[i]=='(')
    {
      count++;
    }
    else
    {
      count1++;
    }
  }
 if((count==count1)&&(s[i]!=')')&&(s[l-1]!='('))
 {
   printf("yes");
 }
 else
 {
   return 0;
 }
 }
