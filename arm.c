#include<stdio.h>  
#include<conio.h>  
void main()
{
int n,arm,sum=0,temp;   
printf("enter the number=");  
scanf("%d",&n);  
temp=n;  
while(n>0)  
{  
arm=n%10;  
sum=sum+(arm*arm*arm);  
n=n/10;  
}  
if(temp==sum)  
printf("armstrong  number ");  
else  
printf("not armstrong number");    
}  
