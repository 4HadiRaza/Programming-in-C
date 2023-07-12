#include <stdio.h>

int main() {
    int num1, num2, num3, largest, num_1, num_2;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest = num1;
    if (num2 > largest) {
        largest = num2;
        num_1 = num1;
        num_2 = num3;
    }
    if (num3 > largest) {
        largest = num3;
        num_1 = num1;
        num_2 = num2;
    }
    else
    {
    	num_1 = num1;
    	num_2 = num3;
	}
    
    if ( num_1 + num_2 > largest)
    {
    	printf("It is a valid triangle");
	}
	else 
	{
		printf("It is not a valid triangle");
	}
    return 0;
}

