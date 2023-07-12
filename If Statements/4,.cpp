//4.Write a program to enter 2 numbers and print the larger in them.
#include<stdio.h>
main ()
{
	int num1;
	int num2;
	
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	
	if (num1 - num2 > 0)
	{
		printf("%d is te larger number",num1);
	}
	else if (num2 - num1 > 0)
	{
		printf("%d is te larger number",num2);
	}
	else if (num2 - num1 == 0)
	{
		printf("%d and %d are equal",num1,num2);
	}
}
