#include <stdio.h>

#define LOWER   0 // lower limit of table
#define UPPER 300 // upper limit
#define STEP   20 // step

int main()
{
   int fahr;

   for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
   {
      printf("%3d\t%6.1f\n", fahr, (5.0f / 9.0f) * (fahr - 32));
   }

   return 0;
}
