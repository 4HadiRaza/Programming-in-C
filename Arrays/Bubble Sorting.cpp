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
		for(int j = 0; j < n-1; j++)
		{
			if (a[j] > a [j+1])
			{
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	for (i = 0; i <= 4; i++)
	{
		printf("%d ",a[i]);
	}
}

