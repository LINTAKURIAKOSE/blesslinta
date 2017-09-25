#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char * s = str;
    int  special,i;
     int special = 0;
    printf("Enter any string :");
    gets(str);
   while(*s)
    {
    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    {
    if(str[i]>='0' && str[i]<='9')
 
    {
            special++;
                s++;
    }
    printf("Special characters = %d",special);
    return 0;
}
