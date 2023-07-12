#include <stdio.h>

int main() 
{
    int num, digit, reversed_num = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
	    while(num != 0) 
		{
        digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    	}
    
    printf("%d",reversed_num);
    
    return 0;
}

