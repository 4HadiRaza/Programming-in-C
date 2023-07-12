#include<stdio.h>
main()
{
	int Arr[5];
	int i;
	int max = Arr[0];
	printf("Enter 5 numbers: ");
	for (i = 1; i <= 5; i++)
	{
		scanf("%d",&Arr[i]);
	}
	for (i = 1; i <= 5; i++)
	{
		if (Arr[i]> max)
		{
			max = Arr[i];
		}
	}
	printf("The largest number is %d",max);
}

