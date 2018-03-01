#include <stdio.h>
#include<string.h>
int main() 
{
	int n,rev=0,rem;
	printf("enter number");
	scanf("%d",&n);
	while(n!=0)
	{
	    rem=n%10;
	    rem=rev*10+rem;
	    n=n/10;
	    printf("%d",rem);
	}
	return 0;
}
