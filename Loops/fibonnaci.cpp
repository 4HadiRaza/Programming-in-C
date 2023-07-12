#include<stdio.h>
main()
{
	int num1 = 1, num2 = 1, num3 = 0, i;
	while(i<=5)
	{
		printf("%d ", num3);
		num1 = num2;
		num2 = num3;
		num3 = num1 + num3;
		i++;
	}
}
