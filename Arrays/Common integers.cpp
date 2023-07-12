#include<stdio.h>
main()
{
	int Arr1[5];
	int Arr2[5];
	int i,j;
	printf("Enter 5 numbers: ");
	for (i = 0; i <= 4; i++)
	{
		scanf("%d",&Arr1[i]);
 	}
	printf("Enter next 5 numbers: ");
	for (j = 0; j <= 4; j++)
	{
		scanf("%d",&Arr2[j]);
	}
	printf ("The common integers are: ");
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if ( Arr1[i] == Arr2[j])
			{
				printf ("%d ",Arr1[i]);
			} 
		}
	}
	return 0;
}
