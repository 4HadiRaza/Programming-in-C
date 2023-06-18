#include<stdio.h>
int DtoB();
main()
{
	int n,binary;
	printf("Enter a number in binary: ");
	scanf ("%d",&n);
	DtoB( n );
}
int DtoB(int n)
{
	if (n == 0)
	{
		return 0;
	}
	int d = n%2;
	n = n/2;
	printf("%d",d);
	return 	DtoB(n);
}


