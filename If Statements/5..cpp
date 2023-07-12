//5.Enter two numbers and find smaller in them.

#include<stdio.h>
main ()
{
	int num1;
	int num2;
	
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	
	if (num1 < num2)
	{
		printf("%d is the smaller number",num1);
	}
	else if (num2 < num1)
	{
		printf("%d is the smaller number",num2);
	}
	else if (num2 - num1 == 0)
	{
		printf("%d and %d are equal",num1,num2);
	}	
}
