#include <stdio.h>
main() 
{
   int num, i, j = 0;

   printf("Enter a positive integer: ");
   scanf("%d", &num);

   for (i = 2; i <= num/2; ++i) 
   {
      if (num%i == 0) 
      {
    	j = 1;
    	break;
      }
   }

   if (num == 1) 
   {
      printf("1 is neither prime nor composite.\n");
   }
   else 
   {
      if (j == 0)
         printf("%d is a prime number.\n", num);
      else
         printf("%d is not a prime number.\n", num);
   }
   return 0;
}

