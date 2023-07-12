//10. Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message.
#include<stdio.h>
main ()
{
	int number_of_days;
	
	printf ("Enter the days in which the book is returned: ");
	scanf ("%d",&number_of_days);
	
	if (number_of_days < 5)
	{
		printf ("Thankyou for returning the book in due date");
	}
	else if (number_of_days == 5)
	{
		printf("You need to pay 50 paise as fine");
	}
	else if (number_of_days >= 6 && number_of_days < 10)
	{
		printf("You need to pau 1 rupee as fine");
	}
	else if (number_of_days > 10);
	{
		printf ("You need to pay 5 rupees as fine");
	}
	if (number_of_days >= 30)
	{
		printf (" and your membership is cancelled");
	}
}
