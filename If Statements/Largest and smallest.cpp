#include <stdio.h>

int main() {
    int num1, num2, num3, largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    printf("The largest number is %d\n", largest);
    printf("The smallest number is %d\n", smallest);

    return 0;
}

