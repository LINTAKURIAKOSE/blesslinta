#include <stdio.h>
#include<string.h>
int main()
{
 unsigned int long charcount;
char ch;
charcount=0;
while((ch=getc(stdin))!=EOF)
{
 if(ch!='\n'){++charcount;}
}
if(charcount>0)
{
  printf("%u",charcount);
}
return 0;
}
