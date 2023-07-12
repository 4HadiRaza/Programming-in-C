/*1.Enter 2 numbers and find whether first number is divisor of second or not.*/

#include<stdio.h>
main ()
{
	int num1;
	int num2;
	int rem;
	
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	
	rem = num2 % num1;
	
	if (rem == 0)
	{
		printf("%d is a divisor of %d.\n", num1, num2);
	}
	else 
	{
		printf("%d is not a divisor of %d.\n", num1, num2);
	}
}
