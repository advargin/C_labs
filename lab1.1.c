#include <stdio.h>
#include <math.h>

int main()
{
   float x = 0, res = 0, a = 0, b = 0, c = 0, d = 0;
   printf("x=");
   scanf("%f", &x);
   // тангенс в радианах
   if (fabs(fmodf(x, 1)) == 0.5)
   {
      printf("ERROR_tan");
      return 1;
   }
   a = tanf(x);
   if (a <= 0)
   {
      printf("ERROR_log");
      return 2;
   }
   b = sqrtf(fabs(log(a) * log(a) - 123));
   c = expf(-3 * x) + atanf(x);
   if (c == 0)
   {
      printf("ERROR_zerodivision");
      return 3;
   }

   res = b / c;
   printf("%f", res);
   return 0;
}