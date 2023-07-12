//11.Write a program to output whether the person should be insured or not, his/her premium rate and maximum amount for which he/she can be insured.
#include <stdio.h>

int main() {
    char health, location, gender;
    int age;
    float premium, max_amount;

    printf("Enter health status (e/p): ");
    scanf(" %c", &health);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter location (c/v): ");
    scanf(" %c", &location);

    printf("Enter gender (m/f): ");
    scanf(" %c", &gender);

    if (health == 'e' && age >= 25 && age <= 35) {
        if (location == 'c' && gender == 'm') {
            premium = 4.0;
            max_amount = 200000;
        } else if (location == 'c' && gender == 'f') {
            premium = 3.0;
            max_amount = 100000;
        } else if (location == 'v' && gender == 'm') {
            premium = 6.0;
            max_amount = 10000;
        } else {
            printf("Person is not insured.\n");
            return 0;
        }
    } else {
        printf("Person is not insured.\n");
        return 0;
    }

    printf("Premium rate: Rs. %.2f per thousand\n", premium);
    printf("Maximum amount for which the person can be insured: Rs. %.2f\n", max_amount);

    return 0;
}

