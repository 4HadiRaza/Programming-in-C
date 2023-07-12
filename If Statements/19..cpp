#include <stdio.h>

int main() {
    int choice;
    float radius, base, height, length, width, area;

    printf("Geometry Calculator\n");
    printf("--------------------\n");
    printf("1. Calculate the Area of a Circle\n");
    printf("2. Calculate the Area of a Triangle\n");
    printf("3. Calculate the Area of a Rectangle\n");
    printf("4. Quit\n");

    do {
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter the radius of the circle: ");
                scanf("%f", &radius);
                area = 3.14159 * radius * radius;
                printf("The area of the circle is: %.2f\n", area);
                break;
            case 2:
                printf("\nEnter the base of the triangle: ");
                scanf("%f", &base);
                printf("Enter the height of the triangle: ");
                scanf("%f", &height);
                area = 0.5 * base * height;
                printf("The area of the triangle is: %.2f\n", area);
                break;
            case 3:
                printf("\nEnter the length of the rectangle: ");
                scanf("%f", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%f", &width);
                area = length * width;
                printf("The area of the rectangle is: %.2f\n", area);
                break;
            case 4:
                printf("\nBye-bye!\n");
                break;
            default:
                printf("\nInvalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}

