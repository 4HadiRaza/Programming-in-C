//6.	Enter 3 numbers and find largest and smallest in them.
#include<stdio.h>
main ()
{
	int num1;
	int num2;
	int num3;
	
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	printf("Enter the third number: ");
	scanf("%d",&num3);
	
	if (num1 > num2 && num1 > num3 )
	{
		printf("%d is the largest number",num1);
	}
	else if (num2 == num3 && num1 > num2 && num1 > num3 )
	{
		printf("%d is the largest number",num1);
	}
	
	else if (num2 > num1 && num2 > num3 )
	{
		printf("%d is the largest number",num2);
	}
	else if (num1 == num3 && num2 > num1 && num2 > num3 )
	{
		printf("%d is the largest number",num2);
	}
	
	else if (num3 > num1 && num3 > num2 )
	{
		printf("%d is the largest number",num3);
	}
	else if (num1 == num2 && num3 > num1 && num3 > num2 )
	{
		printf("%d is the largest number",num3);
	}
	
	
	
	if (num1 < num2 && num1 < num3 )
	{
		printf(" and %d is the smallest number",num1);
	}
	else if (num2 == num3 && num1 < num2 && num1 < num3 )
	{
		printf("%d is the smallest number",num1);
	}
	
	else if (num2 < num1 && num2 < num3 )
	{
		printf(" and %d is the smallest number",num2);
	}
	else if (num1 == num3 && num2 < num1 && num2 < num3 )
	{
		printf("%d is the smallest number",num2);
	}
	
	else if (num3 < num1 && num3 < num2 )
	{
		printf(" and %d is the smallest number",num3);
	}
	else if (num1 == num2 && num3 < num1 && num3 < num2 )
	{
		printf("%d is the smallest number",num3);
	}
	else if (num1 == num2 == num3==)
	{
		printf("They are all equal");
	}
	
}
