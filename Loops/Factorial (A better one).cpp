#include <stdio.h>
#include <stdlib.h>

int main() {
    int k;
    char choice;

    do {
        int i, j = 1;

        printf("What number would you like to find the factorial of?\n");
        scanf("%d", &k);

        for (i = 1; i <= k; i++) {
            j *= i;
        }

        printf("The factorial of %d is: %d\n", k, j);

        printf("Would you like to find another factorial? (Y/N)\n");
        scanf(" %c", &choice);

        while (choice != 'Y' && choice != 'N') {
            printf("Invalid input. Please enter Y or N.\n");
            scanf(" %c", &choice);
        }

    } while (choice == 'Y');

    printf("Thank you for using the factorial calculator!\n");

    return 0;
}

