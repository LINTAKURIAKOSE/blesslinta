#include <stdio.h>
#include <string.h>
int count whitespace(const char* str)
{
 int count = 0;
 while(*str)
 {
  if(!isspace(*str++))
   count++;
 }
 return count;
}
int main()
{
 char input[256];
 fgets(input, sizeof(input), stdin);
 printf("%d\n",count whitespace(input));
}
