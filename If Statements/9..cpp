//9. If the time taken by the worker is input through the keyboard, find the efficiency of the worker. 
#include<stdio.h>
main ()
{
	float time_taken;
	
	printf ("Enter the time taken by the worker: ");
	scanf ("%f",&time_taken);
	
	if (time_taken >= 2 && time_taken < 3)
	{
		printf("The worker is highly efficient");
	}
	else if (time_taken >= 3 && time_taken < 4)
	{
		printf("The worker needs to improve your speed");
	}
	else if (time_taken >= 4 && time_taken < 5)
	{
		printf("The worker should be given training to improve his/her speed");
	}
	else if (time_taken > 5)
	{
		printf ("The worker needs to quit the company");
	}
	else
	{
		printf ("Invalid input");
	}
}
