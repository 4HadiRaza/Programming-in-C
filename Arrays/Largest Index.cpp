#include<stdio.h>
main()
{
	int Arr[5];
	int i;
	int maxIndex;
	int max = Arr[0];
	printf("Enter 5 numbers: ");
	for (i = 0; i <= 4; i++)
	{
		scanf("%d",&Arr[i]);
	}
	for (i = 0; i <= 4; i++)
	{
		if (Arr[i]> max)
		{
			max = Arr[i];
			maxIndex = i;
		}
	}
	printf("The largest index is %d",maxIndex);
}

