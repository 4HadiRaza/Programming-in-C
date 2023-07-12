#include <stdio.h>

int main() 
{
    int n, i, j, space;
    printf("Enter the number of rows: ");
    scanf("%d", &n); 
	
	for (i=1; i<=n; i++)                                                               // cursor parking (  |  |  )
	{
		for (space =1; space<=n - i; space++)
		{
			printf(" ");
		}
		for (j=1; j <= 2 * i - 1; j ++)
		{
			if ( j == 1 || j == 2*i-1)
			{
				printf ("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for (i = n - 1; i >= 1; i--)
	{
		for (space = 1; space <= n - i; space++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i -1; j++)
		{
			if (j==1 || j == 2 * i - 1)
			{
				printf ("*");
			}
			else  
			{
				printf(" ");
			}
		}
		printf ("\n");
	}
}
