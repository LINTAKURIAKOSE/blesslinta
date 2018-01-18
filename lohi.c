#include<stdio.h>
 int main()
 {
     int a[20],min,max,i,m;
     printf("enter  numbers");
     scanf("%d",&m);
     for(i=0;i<=m;i++)
     if(a[i]>m)
     {
         printf("%d",min);
         min=a[0];
         
     }
     else if(a[i]<m)
     {
         printf("%d",max);
         max=a[0];
     }
     
 }


