#include <stdio.h>
#include<string.h>
int main() 
{
	int n,reverse=0,remainder;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
	    remainder=n%10;
	    remainder=reverse*10+remainder;
	    n=n/10;
	    printf("%d",remainder);
	}
	return 0;
}
