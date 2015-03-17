#include <stdio.h>
#include <limits.h>

int main (int argc, char *argv[]) {
   printf("The maximum value of int is %d\n", INT_MAX);
   printf("The minimum value of int is %d\n", INT_MIN);
   
   // limits.h no longer contains FLT, DBL constants.
   /*
   printf("The maximum value of float is %lf\n", FLT_MAX);
   printf("The minimum value of float is %lf\n", FLT_MIN);
   printf("The maximum value of double is %lf\n", DBL_MAX);
   printf("The minimum value of double is %lf\n", DBL_MIN);
   */
   
   return 0;
}
