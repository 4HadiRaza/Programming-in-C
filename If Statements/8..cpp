//8.	If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. 
#include<stdio.h>
main ()
{
	int side1;
	int side2;
	int side3;
	int side_1;
	int side_2;
	int largest_side;
	
	printf("Enter the first side: ");
	scanf("%d",&side1);
	printf("Enter the second side: ");
	scanf("%d",&side2);
	printf("Enter the third side: ");
	scanf("%d",&side3);
	
	if (side1 > side2 && side1 > side3 )
	{
		largest_side = side1;
		side2 = side_1;
		side3 = side_2;
	}
	else if (side2 > side1 && side2 > side3 )
	{
		largest_side = side2;
		side1 = side_1;
		side3 = side_2;
	}
	else if (side3 > side1 && side3 > side2 )
	{
		largest_side = side3;
		side1 = side_1;
		side2 = side_2;
	}
	
	if (side_1 + side_2 > largest_side )
	{
		printf("The triangle is valid");
	}
	else
	{
		printf("The triangle is not valid");
	}
	
}
