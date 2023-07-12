#include<stdio.h>
main()
{
	int Arr[5];
	int i;
	int size = 5;
	int start = 0;
	int end = size - 1;
	int temp;
	
	printf("Enter 5 numbers: ");
	for (i = 0; i <= 4; i++)
	{
		scanf("%d",&Arr[i]);
	}
	for(start = 0; start < end; start++)
	{
		temp = Arr[start];
		Arr[start] = Arr[end];
		Arr[end] = temp;
		end--;
	}
	for (i = 0; i <= 4; i++)
	{
		printf("%d ",Arr[i]);
	}
}
