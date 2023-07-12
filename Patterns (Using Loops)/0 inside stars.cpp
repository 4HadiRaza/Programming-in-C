#include<stdio.h>
main()
{
	int i, j , n;
	printf("Enter the number of rows: ");
	scanf ("%d",&n);
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n; j++ )
		{
			if ( i%2==0)
			{
				if (j%2==0)
				{
					printf("0");
				}
					else
				{
					printf("*");
				}
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
