#include <stdio.h>
#include<conio.h>
int reversDigits(int n)
{
 static int revnum = 0;
 static int basepos = 1;
if(n > 0)
{
reversDigits(n/10);
revnum  += (n%10)*basepos;
basepos *= 10;
}
return revnum;
}
int main()
{
int n;
printf("Reverse of no. is %d", reversDigits(n);
getchar();
return 0;
}
