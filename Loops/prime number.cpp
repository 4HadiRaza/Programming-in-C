#include <stdio.h>

int main()
{
    int num, i = 2, is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(i <= num/2)
    {
        if(num % i == 0)
        {
            printf("Not a prime number");
            return 0;
        }
        i++;
    }

        printf("It is a prime number\n");

    return 0;
}

