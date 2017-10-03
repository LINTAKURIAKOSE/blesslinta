#include<stdio.h>
int stringCompare(char[],char[]);
int main()
{
 char s1[100],s2[100];
  int compare;
   printf("Enter first string");
    scanf("%s",s1);
    printf("Enter second string");
    scanf("%s",s2);
     compare = stringCompare(s1,s2);
        if(compare == 1)
        {
         printf("Both strings are equal");
         }
    else{
         printf("Both strings are not equal");}
           return 0;
}
