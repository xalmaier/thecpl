#include <stdio.h>

int main()
{
   int fahr;

   printf("%3s\t%6s\n", "fahr", "celsius");
   for (fahr = 0; fahr <= 300; fahr = fahr + 20)
   {
      printf("%3d\t%6.1f\n", fahr, (5.0f / 9.0f) * (fahr - 32.0f));
   }

   printf("%3s\t%6s (in reverse order)\n", "fahr", "celsius");
   for (fahr = 300; fahr >= 0; fahr = fahr - 20)
   {
      printf("%3d\t%6.1f\n", fahr, (5.0f / 9.0f) * (fahr - 32));
   }
   return 0;
}
