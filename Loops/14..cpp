#include <stdio.h>

int main() {
   int num, originalNum, remainder, result;

   printf("Armstrong numbers between 100 and 500: ");

   for(num = 100; num <= 500; num++) {
      result = 0;
      originalNum = num;

      while (originalNum != 0) {
         remainder = originalNum % 10;
         result += remainder * remainder * remainder;
         originalNum /= 10;
      }

      if (result == num) {
         printf("%d ", num);
      }
   }
   return 0;
}

