#include <stdio.h>
 main()
 {
 	int i;
 	int  num = 7;
 	int sum = 0;
 	for(i= 7; i<=100; i++)
 	{
 		if(i % num == 0)
 		{
 			printf("%d \n",i);
 			sum = sum + i;
		}
	}
	printf("The sum of the multiples of 7 is: %d",sum);
 }
 
