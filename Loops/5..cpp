#include <stdio.h>
 main() 
 {
   int num, sum = 0;
   float avg;

   printf("Enter 10 numbers: \n");

   for(int i = 1; i <= 10; i++) {
      printf("Enter number %d: ", i);
      scanf("%d", &num);
      sum += num;
   }

   avg = (float)sum / 10;

   printf("Sum = %d\n", sum);
   printf("Average = %f\n", avg);

   return 0;
}
