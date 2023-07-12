#include<stdio.h>
main()
{
	int i;
	int j = 1;
	int k;
	printf("What number would you like to find the factorial of?\n");
	scanf("%d",&k);
	for (i = 1; i <= k; i++)
	{
		j = i * j;
	}
	printf ("The factorial of %d is %d",k,j);
}

