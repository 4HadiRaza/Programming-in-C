#include <stdio.h>

int main() 
{
    int i = 1, j = 1, k, l, n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("%d %d ", i, j);

    for (l = 3; l <= n; l++) 
	{
        k = i + j;
        printf("%d ", k);
        i = j;
        j = k;
    }

    return 0;
}

