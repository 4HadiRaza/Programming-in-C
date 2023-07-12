#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c) {
        printf("The triangle is an equilateral triangle\n");
    } else if (a == b || b == c || c == a) {
        printf("The triangle is an isosceles triangle\n");
    } else {
        printf("The triangle is a scalene triangle\n");
    }

    return 0;
}

