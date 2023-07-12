#include <stdio.h>

int main() {
    int numbers[10];
    int i, isPalindrome = 1;

    printf("Enter an array of 10 numbers:\n");
    for (i = 0; i < 10; i++) 
	{
      //  printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

        for (i = 0; i < 5; i++) 
	{
        if (numbers[i] != numbers[9 - i]) 
		{
            isPalindrome = 0;
			break; 
        }
    }

    if (isPalindrome) 
	{
        printf("The array is a palindrome.\n");
    } else 
	{
        printf("The array is not a palindrome.\n");
    }
    return 0;
}

