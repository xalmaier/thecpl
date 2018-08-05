#include <stdio.h>

int main()
{
   int fahr, celsius;
   int lower, upper, step;

   lower = 0;
   upper = 300;
   step = 20;

   fahr = lower;

   printf("%3s\t%6s (integer point precision)\n", "fahr", "celsius");
   while (fahr <= upper)
   {
      celsius = 5 * (fahr - 32) / 9;
      printf("%3d\t%6d\n", fahr, celsius);
      fahr = fahr + step;
   }

   // now a better version (more accurate)
   {
      float fahr, celsius;
      int lower, upper, step;

      lower = 0;
      upper = 300;
      step = 20;

      fahr = lower;

      printf("%3s\t%6s (floating point precision)\n", "fahr", "celsius");
      while (fahr <= upper)
      {
         celsius = 5.0f / 9.0f * (fahr - 32.0f);
         printf("%3.0f\t%6.1f\n", fahr, celsius);
         fahr = fahr + step;
      }
   }

   // celsius to fahrenheit
   {
      float fahr, celsius;
      int lower, upper, step;

      lower = -100;
      upper = 100;
      step = 20;

      celsius = lower;

      printf("%6s\t%s (floating point precision)\n", "celsius", "fahr");
      while (celsius <= upper)
      {
         fahr = (celsius + 160.0f / 9.0f) * 9.0f / 5.0f;
         printf("%6.0f\t%6.1f\n", celsius, fahr);
         celsius = celsius + step;
      }
   }

   return 0;
}
