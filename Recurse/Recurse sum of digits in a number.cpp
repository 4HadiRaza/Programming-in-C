#include<stdio.h>
int sumdigits(int n);
main()
{
	int n,sum;
	printf("Enter a number: ");
	scanf("%d",&n);
	sum = sumdigits(n);
	printf("The sum of all the digits is %d",sum);
}
int sumdigits (int n)
{
	if ( n == 0)
	{
		return 0;
	}
	int d = n%10;
	n = n/10;
	return d + sumdigits(n);
}
