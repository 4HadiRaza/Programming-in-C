//3.Enter a number and find whether its even or odd.
#include<stdio.h>
main ()
{
	int num;
	
	printf("Enter the first number: ");
	scanf("%d",&num);
	
	num % 2;
	
	if (num % 2 == 0)
	{
		printf("%d is an even number",num);
	}
	else
	{
		printf("%d is not an even number",num);
	}
}
