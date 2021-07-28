#include <stdio.h>
#include <math.h>
   3 int main()
   4 {
   5     int i, j;
   6     for (i = 1; i < 10; i = i + 1)
   7     {
   8         for (j = 1; j < 10; j = j + 1)
   9             printf("%2d x %2d = %3d\n", j, i, i * j);
  10         printf("\n");
  11     }
  12     return 0;
  13 }
