#include<stdio.h>
void swap(int a,int b)
{
    a=a+b;
    b=a+b;
    a=b;
    }
void main()
{
    int a,b;
    printf("enter numbers");
    scanf("%d%d",&a,&b);
    printf("swap numbers\t%d\t%d",b ,a);
}
