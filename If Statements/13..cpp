#include <stdio.h>

    main() {
    int num1;
    int num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    (num1 > num2) ? printf("%d is the larger number", num1) : printf("%d is the larger number", num2);
}

