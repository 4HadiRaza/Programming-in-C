#include<stdio.h>
main()
{
	int Arr[5];
	int i,sum = 0;
	for(i=0;i<=4;i++)
	{
		scanf("%d",&Arr[i]);
	}
	for(i=0;i<=4;i++)
	{
		if ( Arr[i]%2 == 1)
		{
		sum = sum + Arr[i];
		}
	}
	printf ("The sum of all the numbers is %d",sum);
}
