#include <stdio.h>
 int hcf(int, int);
 int main()
{
  int n1,n2, result;
    printf("Enter the two numbers to find their HCF: ");
    scanf("%d%d", &n1, &n2);
    result = hcf(n1,n2);
    printf("The HCF of \n", n1, n2, result);
     return 0;
}
 int hcf(int n1, int n2)
{
    while (n1!= n2)
    {
       if (n1> n2)
        {
         n1= n1- n2;
        }
        else
        {
         n2= n2 - n1;
        }
    }
    return n1;
}
