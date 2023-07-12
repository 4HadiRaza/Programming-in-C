#include<stdio.h>
main()
{
	int Arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=0;i<=9;i++)
	{
		if (n == Arr[i])
		{
			
			printf("1");
			return 0;
		}
	}
	printf("-1");	
}
