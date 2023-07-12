#include <stdio.h>
main() 
{
    int num1;
	int num2;
    int result = 1;

    printf("Enter the base number: ");
    scanf("%d", &num1);

    printf("Enter the exponent: ");
    scanf("%d", &num2);

    while (num2 != 0) 
	{
        result *= num1;
        --num2;
    }

    printf("Result: %d", result);
    return 0;
}
