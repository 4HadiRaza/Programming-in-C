#include <stdio.h>

int main()
{
    int i, j, k;
    char ch;

    for(i=1; i<=5; i++)
    {
        ch = 'A';

        for(j=5; j>i; j--)
        {
            printf("  ");
        }

        for(k=1; k<=i; k++)
        {
            printf("%c ", ch);
            ch++;
        }

        ch--;

        for(k=1; k<i; k++)
        {
            printf("%c ", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}

