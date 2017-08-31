#include<stdio.h>
#include<conio.h>
int main()
{
char n;
int lv,uv;
printf("enter the alphabets");
scanf("%d",&n);
lv=(n=='a'||n=='e'||n=='i'||n=='o'||n=='u');
uv=(n=='A'||n=='E'||n=='I'||n=='O'||n=='U');
if(lv||uv)
{
printf("alphabet is vowel");
}
else
{
printf("alphabet is consonant");
}
}
