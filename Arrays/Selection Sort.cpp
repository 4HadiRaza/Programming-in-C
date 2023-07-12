#include<stdio.h>
main()
{
	int a[5];
	int n = 5;
	int i;
	
	printf("Enter 5 numbers: ");
	for (i = 0; i <= 4; i++)
	{
		scanf("%d",&a[i]);
	}
	for ( i = 0; i < n; i++)
	{
		int S = a[i];
		int Si = i;
		for (int j = i + 1; j < n; j++ )
		{
			if (a[j] < S)
			{
				S = a[j];
				Si = j;
			}
			int t = a[i];
			a[i] = a[S];
			a[Si] = t;
		}
	}
	
	for (i = 0; i <= 4; i++)
	{
		printf("%d ",a[i]);
	}
}

