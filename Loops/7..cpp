#include <stdio.h>
 main()
 {
 	int num, i;
 	printf("Enter a number: ");
 	scanf("%d",&num);
 	
 	for(i= 1; i<=30; i++)
 	{
 		if(i % num == 0)
 		{
 			printf("%d ",i);
		}
	}
 }
 
