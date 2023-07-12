#include <stdio.h>

int main() {
    int number, first_digit, second_digit, third_digit;
    
    printf("Enter a number (between 1 and 999): ");
    scanf("%d", &number);

    third_digit = number % 10;
    second_digit = (number / 10) % 10;
    first_digit = (number / 100) % 10;

    if (number == 0) {
        printf("Zero");
    } else if (number < 0 || number > 999) {
        printf("Invalid input");
    } else {
        if (first_digit > 0) {
            switch (first_digit) {
                case 1:
                    printf("One hundred ");
                    break;
                case 2:
                    printf("Two hundred ");
                    break;
                case 3:
                    printf("Three hundred ");
                    break;
                case 4:
                    printf("Four hundred ");
                    break;
                case 5:
                    printf("Five hundred ");
                    break;
                case 6:
                    printf("Six hundred ");
                    break;
                case 7:
                    printf("Seven hundred ");
                    break;
                case 8:
                    printf("Eight hundred ");
                    break;
                case 9:
                    printf("Nine hundred ");
                    break;
            }
        }

        if (second_digit > 0 || third_digit > 0) {
            if (first_digit > 0) {
                printf("and ");
            }
            if (second_digit == 0 || second_digit == 1) {
                switch (third_digit) {
                    case 0:
                        printf("ten");
                        break;
                    case 1:
                        printf("eleven");
                        break;
                    case 2:
                        printf("twelve");
                        break;
                    case 3:
                        printf("thirteen");
                        break;
                    case 4:
                        printf("fourteen");
                        break;
                    case 5:
                        printf("fifteen");
                        break;
                    case 6:
                        printf("sixteen");
                        break;
                    case 7:
                        printf("seventeen");
                        break;
                    case 8:
                        printf("eighteen");
                        break;
                    case 9:
                        printf("nineteen");
                        break;
                }
            } else {
                switch (second_digit) {
                    case 2:
                        printf("twenty");
                        break;
                    case 3:
                        printf("thirty");
                        break;
                    case 4:
                        printf("forty");
                        break;
                    case 5:
                        printf("fifty");
                        break;
                    case 6:
                        printf("sixty");
                        break;
                    case 7:
                        printf("seventy");
                        break;
                    case 8:
                        printf("eighty");
                        break;
                    case 9:
                        printf("ninety");
                        break;
                }
                if (second_digit > 0 && third_digit > 0) {
                    printf("-");
                }
                switch (third_digit) {
                    case 1:
                        printf("one");
                        break;
                    case 2:
                        printf("two");
                        break;
                    case 3:
                        printf("three");
                        break;
                    case 4:
                        printf("four");
                        break;
                    case 5:
                        printf("five");
                        break;
                    case 6:
                        printf("six");
                        break;
                    case 7:
                        printf("seven");
                        break;
                    case 8:
                        printf("eight");
                        break;
                    case 9:
                        printf("nine");
                        break;
                }
            }
        }
    }

    return 0;
}

