#include<stdio.h>
int main()
{
    int re=0,s,y,n;
    printf("enter the number");
    scanf("%d",&n)
    while(n!=0)
    {
        s=n%10;
        re=(re*10)+s;
        re=n/10;
    }
    while(re!=0)
    {
        y=re%10;
        re=re/10;
        printf("%d",re);
    }
}
