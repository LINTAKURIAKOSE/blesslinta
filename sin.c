#include <stdio.h>
#include <math.h>
#define pi  3.14
int main () {
   float A, ret, val,n;
   printf("angle");
   scanf("%f",&A);
   val = pi / 180;
   ret = sin(A*val);
   printf(" %f ",round(ret));
   return 0;
}
